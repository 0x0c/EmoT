import cv2
import numpy as np
import sys

min_table = 100
max_table = 192
diff_table = max_table - min_table
look_up_table = np.arange(256, dtype = 'uint8' )

for i in range(0, min_table):

    look_up_table[i] = 0

for i in range(min_table, max_table):

    look_up_table[i] = 255 * (i - min_table) / diff_table

for i in range(max_table, 255):

    look_up_table[i] = 255

args = sys.argv
text_file = open(args[1], "w")
img = cv2.imread(args[2])
img = cv2.flip(img, 1)
img = cv2.LUT(img, look_up_table)

text_file.write("unsigned char rgb[16][16][3] = {")
for row in img:
    text_file.write("{")
    for pix in row:
        text_file.write("{")
        r = pix[2]
        # if r == 255:
        #     r = 0
        g = pix[1]
        # if g == 255:
        #     g = 0
        b = pix[0]
        # if b == 255:
        #     b = 0
        text_file.write(str(r))
        text_file.write(",")
        text_file.write(str(g))
        text_file.write(",")
        text_file.write(str(b))
        text_file.write(",")
        text_file.write("},")
    text_file.write("},")
text_file.write("};")
text_file.close()
