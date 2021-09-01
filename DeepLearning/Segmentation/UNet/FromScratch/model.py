import torch 
import torch.nn as nn
import torchvision.transforms.functional as TF

## Opposed to paper, we use same in place of valid for ease. Also BN wasnt there in paper

class DoubleConv(nn.Module):
    def __init__(self, in_channels, out_channels):
        super(DoubleConv, self).__init__()
        self.conv = nn.Sequential(
            nn.Conv2d(in_channels, out_channels, 3, 1 ,1 , bias = False),
            nn.BatchNorm2d(out_channels),
            nn.ReLu(inplace = True), 
            nn.Conv2d(out_channels, out_channels, 3, 1 ,1 , bias = False),
            nn.BatchNorm2d(out_channels),
            nn.ReLu(inplace = True) 

        )
        
def forward(self, X):
    return self.conv(X)

class UNET(nn.Module):
    def __init__(
        self, in_channels = 3, out_channels = 1, features =[64,128,256,512],
    ):
        super(UNET, self).__init__()
        self.ups = nn.ModuleList()
        self.downs = nn.ModuleList()
        self.pools = nn.MaxPool2d(kernel_size = 2, stride = 2)

        ## Down part of U Net

        for feature in features:
            self.downs.append(DoubleConv(in_channels, feature))
            in_channels = feature

        ## Up part of U Net

        for feature in reversed(features):
            self.ups.append(
                nn.ConvTranspose2d(
                    feature*2, feature, kernel_size = 2, stride = 2,
                )
            )
            self.ups.append(DoubleConv(feature*2, feature))

        self.bottleneck = DoubleConv(features[-1], features[-1]*2) # 512 is the last in down, we need 1024 as next FCN

        self.final_conv = nn.Conv2d(features[0], out_channels) # last layer which translates into output classes,in channels same as start due to U symmetry

    def forward(self, x):
        skip_connections = []

        # create the whole of down

        for down in self.downs:
            x = down(x)
            skip_connections.append(x)
            x = self.pool(x)

        x = self.bottleneck(x)

        ## since first skip coonection created gets used last 
        skip_connections = skip_connections[::-1]

        ## first upsample then concat with skip connection
        ## then pass through double conv
        for idx in range(0, len(self.ups), 2):
            x = self.ups[idx](x)
            skip_connection = skip_connections[idx//2] # 2 steps in self.ups, we only have one skip per stage

            ## maxpooling and upsampling can reduce the dimensions 
            ## eg input size = 161, after 4 stages botteleneck is 40, when we upsample it is 160: 1 pixel less: concatenation (skip, upsample) not possible 
            ## we can choose input shape as multiple of 16/ crop or resize our skip connection before concatenation
            
            if x.shape != skip_connection.shape:
                x = TF.resize(x, size = skip_connection.shape[2:])

            concat_skip = torch.cat((skip_connection, x), dim = 1) # concat along the depth
            x = self.ups[idx+1](concat_skip) #Doubleconcat

        return self.final_conv(x)

def test():
    x = torch.randn(3,1,160,160)
    model = UNET(in_channels=1, out_channels=1)
    preds = model(x)

    assert preds.shape == x.shape        


if __name__ == "main":
    test()




