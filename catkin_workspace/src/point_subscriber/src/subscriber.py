#!/usr/bin/env python3
import rospy
from std_msgs.msg import String
from sensor_msgs.msg import PointCloud2
import struct
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit
from mpl_toolkits.mplot3d import Axes3D
import math
import pyvista as pv
import open3d as o3d

my_data = 0
array_size = 0
point_size = 0 

# test function
def function(data, a, b, c):
    x = data[0]
    y = data[1]
    return a * (x**b) * (y**c)

def callback(data):
	global my_data
	global array_size
	global point_size

	my_data = data.data
	point_size = data.width
	print("Point Size: ", point_size)
	coord_array_size = (point_size*3)

	i = 1
	current_low = 0
	current_high = 0
	previous_high = 0

	current_hex_string = 0
	hex_string = my_data.hex()

	xyz_points_array = [0]* coord_array_size
	xyz_point_array_counter = 0
	xyz_array = [0]*point_size

	x_point_array = [0]* point_size
	y_point_array = [0]* point_size
	z_point_array = [0]* point_size
	point_array_counter = 0

	while(i <= point_size):
		if(i == 1):
			current_low = 0
			current_high = 32
			previous_high = 32
			i += 1

			current_hex_string = hex_string[current_low:current_high]
			x_coord = xyz_points_array[0] = struct.unpack('f', bytes.fromhex(current_hex_string[0:8]))
			y_coord = xyz_points_array[1] = struct.unpack('f', bytes.fromhex(current_hex_string[8:16]))
			z_coord = xyz_points_array[2] = struct.unpack('f', bytes.fromhex(current_hex_string[16:24]))

			x_point_array[point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[0:8]))[0]
			y_point_array[point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[8:16]))[0]
			z_point_array[point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[16:24]))[0]

			xyz_point_array_counter += 3
			point_array_counter += 1

		elif(i > 1):
			current_low = previous_high
			current_high = (previous_high + 32)
			previous_high = current_high
			i += 1

			current_hex_string = hex_string[current_low:current_high]
			x_coord = xyz_points_array[xyz_point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[0:8]))
			y_coord = xyz_points_array[xyz_point_array_counter + 1] = struct.unpack('f', bytes.fromhex(current_hex_string[8:16]))
			z_coord = xyz_points_array[xyz_point_array_counter + 2] = struct.unpack('f', bytes.fromhex(current_hex_string[16:24]))

			x_point_array[point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[0:8]))[0]
			y_point_array[point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[8:16]))[0]
			z_point_array[point_array_counter] = struct.unpack('f', bytes.fromhex(current_hex_string[16:24]))[0]

			xyz_point_array_counter += 3
			point_array_counter += 1

	#print("\nCoordinate Array: ", xyz_points_array)
	print("\nX Coordinate Array: ", x_point_array)
	#print("\nY Coordinate Array: ", y_point_array)
	#print("\nZ Coordinate Array: ", z_point_array)

	#plotting
	#fig = plt.figure()
	#ax = fig.add_subplot(111, projection='3d')
	#ax.scatter(x_point_array, y_point_array, z_point_array, s = 1, c='blue')
	#plt.xlabel('X Axis')
	#plt.ylabel('Y Axis')
	##plt.zlabel('Z Axis')
	#plt.show()
	#n_points = (xyz_points_array,3)
	#print("\n n_points Array: ", n_points)
	#cloud = pv.PolyData(n_points)
	#cloud.plot()

	#volume = cloud.delaunay_3d(alpha=2.)
	#shell = volume.extract_geometry()
	#shell.plot()

#----------------------

	# # get fit parameters from scipy curve fit
	# parameters, covariance = curve_fit(function, [x_point_array, y_point_array], z_point_array)

	# # create surface function model
	# # setup data points for calculating surface model
	# model_x_data = np.linspace(min(x_point_array), max(x_point_array), 30)
	# model_y_data = np.linspace(min(y_point_array), max(y_point_array), 30)
	# # create coordinate arrays for vectorized evaluations
	# X, Y = np.meshgrid(model_x_data, model_y_data)
	# # calculate Z coordinate array
	# Z = function(np.array([X, Y]), *parameters)

	# # setup figure object
	# fig = plt.figure()
	# # setup 3d object
	# ax = Axes3D(fig)
	# # plot surface
	# ax.plot_surface(X, Y, Z)
	# # plot input data
	# ax.scatter(x_point_array, y_point_array, z_point_array,s = 1, color='red')
	# # set plot descriptions
	# ax.set_xlabel('X data')
	# ax.set_ylabel('Y data')
	# ax.set_zlabel('Z data')

	#plt.show()




	

def listener_new():
	rospy.init_node('listener_new', anonymous=True)
	rospy.Subscriber("rviz_selected_points", PointCloud2, callback)
	rospy.spin()

if __name__ == '__main__':
	listener_new()