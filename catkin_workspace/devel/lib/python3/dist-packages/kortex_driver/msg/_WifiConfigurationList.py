# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/WifiConfigurationList.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class WifiConfigurationList(genpy.Message):
  _md5sum = "826e37c04fad51b5554819fbd5e69cc8"
  _type = "kortex_driver/WifiConfigurationList"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
WifiConfiguration[] wifi_configuration_list
================================================================================
MSG: kortex_driver/WifiConfiguration

Ssid ssid
string security_key
bool connect_automatically
================================================================================
MSG: kortex_driver/Ssid

string identifier"""
  __slots__ = ['wifi_configuration_list']
  _slot_types = ['kortex_driver/WifiConfiguration[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       wifi_configuration_list

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(WifiConfigurationList, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.wifi_configuration_list is None:
        self.wifi_configuration_list = []
    else:
      self.wifi_configuration_list = []

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
      length = len(self.wifi_configuration_list)
      buff.write(_struct_I.pack(length))
      for val1 in self.wifi_configuration_list:
        _v1 = val1.ssid
        _x = _v1.identifier
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.security_key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.connect_automatically
        buff.write(_get_struct_B().pack(_x))
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
      if self.wifi_configuration_list is None:
        self.wifi_configuration_list = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.wifi_configuration_list = []
      for i in range(0, length):
        val1 = kortex_driver.msg.WifiConfiguration()
        _v2 = val1.ssid
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v2.identifier = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v2.identifier = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.security_key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.security_key = str[start:end]
        start = end
        end += 1
        (val1.connect_automatically,) = _get_struct_B().unpack(str[start:end])
        val1.connect_automatically = bool(val1.connect_automatically)
        self.wifi_configuration_list.append(val1)
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
      length = len(self.wifi_configuration_list)
      buff.write(_struct_I.pack(length))
      for val1 in self.wifi_configuration_list:
        _v3 = val1.ssid
        _x = _v3.identifier
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.security_key
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.connect_automatically
        buff.write(_get_struct_B().pack(_x))
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
      if self.wifi_configuration_list is None:
        self.wifi_configuration_list = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.wifi_configuration_list = []
      for i in range(0, length):
        val1 = kortex_driver.msg.WifiConfiguration()
        _v4 = val1.ssid
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v4.identifier = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v4.identifier = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.security_key = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.security_key = str[start:end]
        start = end
        end += 1
        (val1.connect_automatically,) = _get_struct_B().unpack(str[start:end])
        val1.connect_automatically = bool(val1.connect_automatically)
        self.wifi_configuration_list.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_B = None
def _get_struct_B():
    global _struct_B
    if _struct_B is None:
        _struct_B = struct.Struct("<B")
    return _struct_B
