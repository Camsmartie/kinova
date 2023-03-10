import numpy as np
import open3d as o3d

input_path="/home/camden.nagg@compass-sys-inc.local/Desktop/"
output_path="/home/camden.nagg@compass-sys-inc.local/Desktop/Mesh-Output/"
dataname="output.pcd"
point_cloud= np.loadtxt(input_path+dataname,skiprows=1)

pcd = o3d.geometry.PointCloud()
pcd.points = o3d.utility.Vector3dVector(point_cloud[:,:3])
pcd.colors = o3d.utility.Vector3dVector(point_cloud[:,3:6]/255)
pcd.normals = o3d.utility.Vector3dVector(point_cloud[:,6:9])

o3d.visualization.draw_geometries([pcd])