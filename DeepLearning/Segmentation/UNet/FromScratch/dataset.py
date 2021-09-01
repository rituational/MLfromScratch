import os 
from PIL import Image 
from torch.utils.data import Dataset 
import numpy as np 

class CarvanaDataset(nn.Dataset):
    def __init__(self, image_dir, mask_dir, transform = None):
        self.image_dir = image_dir
        self.mask_dir = mask_dir
        self.transform = transform 
        self.images = os.listdir(self.images)

    def __len__(self):
        return len(self.images)

    def __getitem__(self, index):
        image_path = os.path.join()