from absl import flags
import sys 

FLAGS = flags.FLAGS
FLAGS(sys.argv)

import time 
import numpy as np
import cv2
import matplotlib.pyplot as plt 

import tensorflow as tf 
from yolov3_tf2.models import YoloV3 
from yolov3_tf2.dataset import transform_images 
from yolov3_tf2.utils import convery_boxes 

from deep_sort import preprocessing 
from deep_sort import nn_matching 
from deep_sort.detection import Detection 
from deep_sort.tracker imort Tracker 
from tools import generation_detection as gdet 

class_names = [c.strip() for c in open().readlines()]
yolo = YoloV3(classes = len(class_names))
yolo.load_weights('./weights/yolov3.tf')

max_cosine_distance = 0.5 
nn_budget = None # library to store features 
nms_max_overlap = 0.8 

model_filename = 'model_data/mars-small128.pb'
encoder = gdet.create_box_encoder(model_filename, batch_size = 1 )
metric = nn_matching.NearestNeightbourDistanceMetric('cosine', max_cosine_distance, nn_budget)
tracker = Tracker(metric)

vid = cv2.VideoCapture(0)


codec = cv2.VideoWriter_fourcc(*'XVID')
vid_fps - 