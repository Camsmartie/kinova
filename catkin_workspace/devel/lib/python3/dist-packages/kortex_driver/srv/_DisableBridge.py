# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/DisableBridgeRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class DisableBridgeRequest(genpy.Message):
  _md5sum = "e7fff85c040dee9f9ad9fd35ed6100dc"
  _type = "kortex_driver/DisableBridgeRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """BridgeIdentifier input

================================================================================
MSG: kortex_driver/BridgeIdentifier

uint32 bridge_id"""
  __slots__ = ['input']
  _slot_types = ['kortex_driver/BridgeIdentifier']

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
      super(DisableBridgeRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.input is None:
        self.input = kortex_driver.msg.BridgeIdentifier()
    else:
      self.input = kortex_driver.msg.BridgeIdentifier()

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
      _x = self.input.bridge_id
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
      if self.input is None:
        self.input = kortex_driver.msg.BridgeIdentifier()
      end = 0
      start = end
      end += 4
      (self.input.bridge_id,) = _get_struct_I().unpack(str[start:end])
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
      _x = self.input.bridge_id
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
      if self.input is None:
        self.input = kortex_driver.msg.BridgeIdentifier()
      end = 0
      start = end
      end += 4
      (self.input.bridge_id,) = _get_struct_I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/DisableBridgeResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class DisableBridgeResponse(genpy.Message):
  _md5sum = "14fb5ca3149c75d17c29aa203a0186ee"
  _type = "kortex_driver/DisableBridgeResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """BridgeResult output

================================================================================
MSG: kortex_driver/BridgeResult

BridgeIdentifier bridge_id
uint32 status
================================================================================
MSG: kortex_driver/BridgeIdentifier

uint32 bridge_id"""
  __slots__ = ['output']
  _slot_types = ['kortex_driver/BridgeResult']

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
      super(DisableBridgeResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = kortex_driver.msg.BridgeResult()
    else:
      self.output = kortex_driver.msg.BridgeResult()

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
      _x = self
      buff.write(_get_struct_2I().pack(_x.output.bridge_id.bridge_id, _x.output.status))
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
        self.output = kortex_driver.msg.BridgeResult()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.output.bridge_id.bridge_id, _x.output.status,) = _get_struct_2I().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_2I().pack(_x.output.bridge_id.bridge_id, _x.output.status))
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
        self.output = kortex_driver.msg.BridgeResult()
      end = 0
      _x = self
      start = end
      end += 8
      (_x.output.bridge_id.bridge_id, _x.output.status,) = _get_struct_2I().unpack(str[start:end])
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
class DisableBridge(object):
  _type          = 'kortex_driver/DisableBridge'
  _md5sum = '5d03590e711a693b2b6ee914ec9cc8b3'
  _request_class  = DisableBridgeRequest
  _response_class = DisableBridgeResponse
