import cv2
import numpy as np

# Load the input image
image = cv2.imread('input.jpg')

# Convert the image to grayscale
gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)

# Blur the image to remove noise
gray = cv2.medianBlur(gray, 5)

# Detect edges in the image
edges = cv2.Laplacian(gray, cv2.CV_8U, ksize=5)

# Threshold the image to create a black and white cartoon effect
ret, mask = cv2.threshold(edges, 100, 255, cv2.THRESH_BINARY_INV)

# Invert the image
mask = cv2.bitwise_not(mask)

# Smooth the image to reduce the color palette
mask = cv2.bilateralFilter(mask, 9, 250, 250)

# Save the output image
cv2.imwrite('output.jpg', mask)
