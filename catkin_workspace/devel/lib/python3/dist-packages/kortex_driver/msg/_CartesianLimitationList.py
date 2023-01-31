# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/CartesianLimitationList.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class CartesianLimitationList(genpy.Message):
  _md5sum = "c96ad5571d257cbcdf15809b29c600bb"
  _type = "kortex_driver/CartesianLimitationList"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
CartesianLimitation[] limitations
================================================================================
MSG: kortex_driver/CartesianLimitation

uint32 type
float32 translation
float32 orientation"""
  __slots__ = ['limitations']
  _slot_types = ['kortex_driver/CartesianLimitation[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       limitations

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CartesianLimitationList, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.limitations is None:
        self.limitations = []
    else:
      self.limitations = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.limitations)
      buff.write(_struct_I.pack(length))
      for val1 in self.limitations:
        _x = val1
        buff.write(_get_struct_I2f().pack(_x.type, _x.translation, _x.orientation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.limitations is None:
        self.limitations = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.limitations = []
      for i in range(0, length):
        val1 = kortex_driver.msg.CartesianLimitation()
        _x = val1
        start = end
        end += 12
        (_x.type, _x.translation, _x.orientation,) = _get_struct_I2f().unpack(str[start:end])
        self.limitations.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.limitations)
      buff.write(_struct_I.pack(length))
      for val1 in self.limitations:
        _x = val1
        buff.write(_get_struct_I2f().pack(_x.type, _x.translation, _x.orientation))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.limitations is None:
        self.limitations = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.limitations = []
      for i in range(0, length):
        val1 = kortex_driver.msg.CartesianLimitation()
        _x = val1
        start = end
        end += 12
        (_x.type, _x.translation, _x.orientation,) = _get_struct_I2f().unpack(str[start:end])
        self.limitations.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I2f = None
def _get_struct_I2f():
    global _struct_I2f
    if _struct_I2f is None:
        _struct_I2f = struct.Struct("<I2f")
    return _struct_I2f
