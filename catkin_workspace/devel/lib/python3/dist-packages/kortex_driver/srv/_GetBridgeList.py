# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/GetBridgeListRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class GetBridgeListRequest(genpy.Message):
  _md5sum = "fa3403cd5897c9698bc0fdcb2a453fbc"
  _type = "kortex_driver/GetBridgeListRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """Empty input

================================================================================
MSG: kortex_driver/Empty
"""
  __slots__ = ['input']
  _slot_types = ['kortex_driver/Empty']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       input

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetBridgeListRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.input is None:
        self.input = kortex_driver.msg.Empty()
    else:
      self.input = kortex_driver.msg.Empty()

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
      pass
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
      if self.input is None:
        self.input = kortex_driver.msg.Empty()
      end = 0
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
      pass
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
      if self.input is None:
        self.input = kortex_driver.msg.Empty()
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/GetBridgeListResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class GetBridgeListResponse(genpy.Message):
  _md5sum = "bf36ac202e627c34848b7cda25e6a013"
  _type = "kortex_driver/GetBridgeListResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """BridgeList output

================================================================================
MSG: kortex_driver/BridgeList

BridgeConfig[] bridgeConfig
================================================================================
MSG: kortex_driver/BridgeConfig

uint32 device_identifier
uint32 bridgetype
BridgePortConfig port_config
BridgeIdentifier bridge_id
================================================================================
MSG: kortex_driver/BridgePortConfig

uint32 target_port
uint32 out_port
================================================================================
MSG: kortex_driver/BridgeIdentifier

uint32 bridge_id"""
  __slots__ = ['output']
  _slot_types = ['kortex_driver/BridgeList']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       output

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GetBridgeListResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = kortex_driver.msg.BridgeList()
    else:
      self.output = kortex_driver.msg.BridgeList()

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
      length = len(self.output.bridgeConfig)
      buff.write(_struct_I.pack(length))
      for val1 in self.output.bridgeConfig:
        _x = val1
        buff.write(_get_struct_2I().pack(_x.device_identifier, _x.bridgetype))
        _v1 = val1.port_config
        _x = _v1
        buff.write(_get_struct_2I().pack(_x.target_port, _x.out_port))
        _v2 = val1.bridge_id
        _x = _v2.bridge_id
        buff.write(_get_struct_I().pack(_x))
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
      if self.output is None:
        self.output = kortex_driver.msg.BridgeList()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.output.bridgeConfig = []
      for i in range(0, length):
        val1 = kortex_driver.msg.BridgeConfig()
        _x = val1
        start = end
        end += 8
        (_x.device_identifier, _x.bridgetype,) = _get_struct_2I().unpack(str[start:end])
        _v3 = val1.port_config
        _x = _v3
        start = end
        end += 8
        (_x.target_port, _x.out_port,) = _get_struct_2I().unpack(str[start:end])
        _v4 = val1.bridge_id
        start = end
        end += 4
        (_v4.bridge_id,) = _get_struct_I().unpack(str[start:end])
        self.output.bridgeConfig.append(val1)
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
      length = len(self.output.bridgeConfig)
      buff.write(_struct_I.pack(length))
      for val1 in self.output.bridgeConfig:
        _x = val1
        buff.write(_get_struct_2I().pack(_x.device_identifier, _x.bridgetype))
        _v5 = val1.port_config
        _x = _v5
        buff.write(_get_struct_2I().pack(_x.target_port, _x.out_port))
        _v6 = val1.bridge_id
        _x = _v6.bridge_id
        buff.write(_get_struct_I().pack(_x))
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
      if self.output is None:
        self.output = kortex_driver.msg.BridgeList()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.output.bridgeConfig = []
      for i in range(0, length):
        val1 = kortex_driver.msg.BridgeConfig()
        _x = val1
        start = end
        end += 8
        (_x.device_identifier, _x.bridgetype,) = _get_struct_2I().unpack(str[start:end])
        _v7 = val1.port_config
        _x = _v7
        start = end
        end += 8
        (_x.target_port, _x.out_port,) = _get_struct_2I().unpack(str[start:end])
        _v8 = val1.bridge_id
        start = end
        end += 4
        (_v8.bridge_id,) = _get_struct_I().unpack(str[start:end])
        self.output.bridgeConfig.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I
class GetBridgeList(object):
  _type          = 'kortex_driver/GetBridgeList'
  _md5sum = '866f5d10e4d60286569bdfe7c65c5078'
  _request_class  = GetBridgeListRequest
  _response_class = GetBridgeListResponse