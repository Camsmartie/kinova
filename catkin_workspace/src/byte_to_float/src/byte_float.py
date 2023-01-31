import struct
import numpy


import numpy as np
#data_bytes = np.array([0x59, 0xFE, 0xA5, 0x3F], dtype=np.uint8)
#data_as_float = data_bytes.view(dtype=np.float32)
#print(data_as_float)

#data_bytes = "59FEA53F"
#x_coord = struct.unpack('!f', bytes.fromhex(data_bytes))

x_coord = struct.unpack('f', b'\x59\xFE\xA5\x3F')
print("x coordinate: ", x_coord)
