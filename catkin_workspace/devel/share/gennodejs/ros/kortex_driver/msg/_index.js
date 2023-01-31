
"use strict";

let ApiOptions = require('./ApiOptions.js');
let KortexError = require('./KortexError.js');
let ErrorCodes = require('./ErrorCodes.js');
let SubErrorCodes = require('./SubErrorCodes.js');
let VectorDriveParameters = require('./VectorDriveParameters.js');
let CoggingFeedforwardModeInformation = require('./CoggingFeedforwardModeInformation.js');
let CustomDataSelection = require('./CustomDataSelection.js');
let Servoing = require('./Servoing.js');
let TorqueCalibration = require('./TorqueCalibration.js');
let ActuatorConfig_SafetyLimitType = require('./ActuatorConfig_SafetyLimitType.js');
let ControlLoop = require('./ControlLoop.js');
let FrequencyResponse = require('./FrequencyResponse.js');
let PositionCommand = require('./PositionCommand.js');
let AxisPosition = require('./AxisPosition.js');
let StepResponse = require('./StepResponse.js');
let SafetyIdentifierBankA = require('./SafetyIdentifierBankA.js');
let ActuatorConfig_ServiceVersion = require('./ActuatorConfig_ServiceVersion.js');
let CoggingFeedforwardMode = require('./CoggingFeedforwardMode.js');
let CommandModeInformation = require('./CommandModeInformation.js');
let CommandMode = require('./CommandMode.js');
let ControlLoopSelection = require('./ControlLoopSelection.js');
let ActuatorConfig_ControlModeInformation = require('./ActuatorConfig_ControlModeInformation.js');
let ActuatorConfig_ControlMode = require('./ActuatorConfig_ControlMode.js');
let TorqueOffset = require('./TorqueOffset.js');
let ControlLoopParameters = require('./ControlLoopParameters.js');
let LoopSelection = require('./LoopSelection.js');
let AxisOffsets = require('./AxisOffsets.js');
let EncoderDerivativeParameters = require('./EncoderDerivativeParameters.js');
let RampResponse = require('./RampResponse.js');
let CustomDataIndex = require('./CustomDataIndex.js');
let ActuatorCyclic_ServiceVersion = require('./ActuatorCyclic_ServiceVersion.js');
let StatusFlags = require('./StatusFlags.js');
let ActuatorCyclic_MessageId = require('./ActuatorCyclic_MessageId.js');
let ActuatorCyclic_CustomData = require('./ActuatorCyclic_CustomData.js');
let CommandFlags = require('./CommandFlags.js');
let ActuatorCyclic_Command = require('./ActuatorCyclic_Command.js');
let ActuatorCyclic_Feedback = require('./ActuatorCyclic_Feedback.js');
let ControllerConfiguration = require('./ControllerConfiguration.js');
let SequenceTaskConfiguration = require('./SequenceTaskConfiguration.js');
let SwitchControlMapping = require('./SwitchControlMapping.js');
let SafetyNotificationList = require('./SafetyNotificationList.js');
let AdvancedSequenceHandle = require('./AdvancedSequenceHandle.js');
let NetworkType = require('./NetworkType.js');
let EmergencyStop = require('./EmergencyStop.js');
let ActionType = require('./ActionType.js');
let SequenceTaskHandle = require('./SequenceTaskHandle.js');
let SnapshotType = require('./SnapshotType.js');
let Sequence = require('./Sequence.js');
let JointLimitation = require('./JointLimitation.js');
let SequenceInfoNotification = require('./SequenceInfoNotification.js');
let SequenceTasksRange = require('./SequenceTasksRange.js');
let Mapping = require('./Mapping.js');
let Ssid = require('./Ssid.js');
let Waypoint_type_of_waypoint = require('./Waypoint_type_of_waypoint.js');
let JointTrajectoryConstraintType = require('./JointTrajectoryConstraintType.js');
let ConstrainedOrientation = require('./ConstrainedOrientation.js');
let Base_SafetyIdentifier = require('./Base_SafetyIdentifier.js');
let JointsLimitationsList = require('./JointsLimitationsList.js');
let MapGroupHandle = require('./MapGroupHandle.js');
let WrenchMode = require('./WrenchMode.js');
let BridgePortConfig = require('./BridgePortConfig.js');
let ProtectionZone = require('./ProtectionZone.js');
let WrenchLimitation = require('./WrenchLimitation.js');
let ActuatorInformation = require('./ActuatorInformation.js');
let TransformationRow = require('./TransformationRow.js');
let WristDigitalInputIdentifier = require('./WristDigitalInputIdentifier.js');
let GpioPinPropertyFlags = require('./GpioPinPropertyFlags.js');
let TwistLimitation = require('./TwistLimitation.js');
let MappingInfoNotificationList = require('./MappingInfoNotificationList.js');
let SafetyEvent = require('./SafetyEvent.js');
let Action = require('./Action.js');
let SequenceInformation = require('./SequenceInformation.js');
let Base_RotationMatrixRow = require('./Base_RotationMatrixRow.js');
let OperatingMode = require('./OperatingMode.js');
let LedState = require('./LedState.js');
let TrajectoryInfoType = require('./TrajectoryInfoType.js');
let SequenceTasks = require('./SequenceTasks.js');
let KinematicTrajectoryConstraints = require('./KinematicTrajectoryConstraints.js');
let TwistCommand = require('./TwistCommand.js');
let WifiEncryptionType = require('./WifiEncryptionType.js');
let ControlModeNotificationList = require('./ControlModeNotificationList.js');
let ProtectionZoneHandle = require('./ProtectionZoneHandle.js');
let SystemTime = require('./SystemTime.js');
let ArmStateNotification = require('./ArmStateNotification.js');
let NetworkHandle = require('./NetworkHandle.js');
let BridgeIdentifier = require('./BridgeIdentifier.js');
let Base_ControlMode = require('./Base_ControlMode.js');
let MapElement = require('./MapElement.js');
let BridgeResult = require('./BridgeResult.js');
let MapGroupList = require('./MapGroupList.js');
let ProtectionZoneInformation = require('./ProtectionZoneInformation.js');
let ChangeWrench = require('./ChangeWrench.js');
let PreComputedJointTrajectoryElement = require('./PreComputedJointTrajectoryElement.js');
let ControllerType = require('./ControllerType.js');
let MappingList = require('./MappingList.js');
let Base_ServiceVersion = require('./Base_ServiceVersion.js');
let JointTorque = require('./JointTorque.js');
let JointNavigationDirection = require('./JointNavigationDirection.js');
let Base_GpioConfiguration = require('./Base_GpioConfiguration.js');
let ConstrainedJointAngles = require('./ConstrainedJointAngles.js');
let ConfigurationChangeNotification = require('./ConfigurationChangeNotification.js');
let GpioCommand = require('./GpioCommand.js');
let Base_CapSenseConfig = require('./Base_CapSenseConfig.js');
let ZoneShape = require('./ZoneShape.js');
let Admittance = require('./Admittance.js');
let UserProfile = require('./UserProfile.js');
let ControllerState = require('./ControllerState.js');
let UserList = require('./UserList.js');
let Base_CapSenseMode = require('./Base_CapSenseMode.js');
let WifiSecurityType = require('./WifiSecurityType.js');
let ProtectionZoneList = require('./ProtectionZoneList.js');
let CartesianSpeed = require('./CartesianSpeed.js');
let MapEvent = require('./MapEvent.js');
let SoundType = require('./SoundType.js');
let SequenceTasksConfiguration = require('./SequenceTasksConfiguration.js');
let WaypointList = require('./WaypointList.js');
let FactoryEvent = require('./FactoryEvent.js');
let CartesianTrajectoryConstraint = require('./CartesianTrajectoryConstraint.js');
let TransformationMatrix = require('./TransformationMatrix.js');
let Map = require('./Map.js');
let IPv4Information = require('./IPv4Information.js');
let FactoryNotification = require('./FactoryNotification.js');
let ServoingMode = require('./ServoingMode.js');
let WifiConfiguration = require('./WifiConfiguration.js');
let ConfigurationChangeNotificationList = require('./ConfigurationChangeNotificationList.js');
let EventIdSequenceInfoNotification = require('./EventIdSequenceInfoNotification.js');
let UserEvent = require('./UserEvent.js');
let ControllerElementHandle = require('./ControllerElementHandle.js');
let UserNotificationList = require('./UserNotificationList.js');
let PreComputedJointTrajectory = require('./PreComputedJointTrajectory.js');
let GpioAction = require('./GpioAction.js');
let ChangeTwist = require('./ChangeTwist.js');
let AdmittanceMode = require('./AdmittanceMode.js');
let ActionList = require('./ActionList.js');
let ChangeJointSpeeds = require('./ChangeJointSpeeds.js');
let GpioEvent = require('./GpioEvent.js');
let MappingHandle = require('./MappingHandle.js');
let WaypointValidationReport = require('./WaypointValidationReport.js');
let Finger = require('./Finger.js');
let ShapeType = require('./ShapeType.js');
let GripperRequest = require('./GripperRequest.js');
let Wrench = require('./Wrench.js');
let AppendActionInformation = require('./AppendActionInformation.js');
let ControllerConfigurationList = require('./ControllerConfigurationList.js');
let FullIPv4Configuration = require('./FullIPv4Configuration.js');
let RobotEventNotification = require('./RobotEventNotification.js');
let RobotEvent = require('./RobotEvent.js');
let JointAngles = require('./JointAngles.js');
let UserProfileList = require('./UserProfileList.js');
let ActionHandle = require('./ActionHandle.js');
let GripperCommand = require('./GripperCommand.js');
let ControllerEvent = require('./ControllerEvent.js');
let ActionNotificationList = require('./ActionNotificationList.js');
let UserNotification = require('./UserNotification.js');
let GpioPinConfiguration = require('./GpioPinConfiguration.js');
let ControllerConfigurationMode = require('./ControllerConfigurationMode.js');
let ControllerEventType = require('./ControllerEventType.js');
let ServoingModeNotificationList = require('./ServoingModeNotificationList.js');
let TrajectoryErrorType = require('./TrajectoryErrorType.js');
let GpioConfigurationList = require('./GpioConfigurationList.js');
let RequestedActionType = require('./RequestedActionType.js');
let WifiInformation = require('./WifiInformation.js');
let ControllerList = require('./ControllerList.js');
let SequenceInfoNotificationList = require('./SequenceInfoNotificationList.js');
let GripperMode = require('./GripperMode.js');
let Gripper = require('./Gripper.js');
let Base_ControlModeNotification = require('./Base_ControlModeNotification.js');
let OperatingModeNotificationList = require('./OperatingModeNotificationList.js');
let Pose = require('./Pose.js');
let TrajectoryInfo = require('./TrajectoryInfo.js');
let GpioBehavior = require('./GpioBehavior.js');
let AngularWaypoint = require('./AngularWaypoint.js');
let Query = require('./Query.js');
let CartesianLimitation = require('./CartesianLimitation.js');
let NavigationDirection = require('./NavigationDirection.js');
let Action_action_parameters = require('./Action_action_parameters.js');
let Xbox360AnalogInputIdentifier = require('./Xbox360AnalogInputIdentifier.js');
let WrenchCommand = require('./WrenchCommand.js');
let NetworkNotification = require('./NetworkNotification.js');
let Gen3GpioPinId = require('./Gen3GpioPinId.js');
let MapEvent_events = require('./MapEvent_events.js');
let WifiConfigurationList = require('./WifiConfigurationList.js');
let Timeout = require('./Timeout.js');
let ProtectionZoneNotification = require('./ProtectionZoneNotification.js');
let CartesianLimitationList = require('./CartesianLimitationList.js');
let MapList = require('./MapList.js');
let ProtectionZoneEvent = require('./ProtectionZoneEvent.js');
let JointTrajectoryConstraint = require('./JointTrajectoryConstraint.js');
let TrajectoryContinuityMode = require('./TrajectoryContinuityMode.js');
let LimitationType = require('./LimitationType.js');
let Base_RotationMatrix = require('./Base_RotationMatrix.js');
let SequenceHandle = require('./SequenceHandle.js');
let ControllerElementState = require('./ControllerElementState.js');
let ControllerElementEventType = require('./ControllerElementEventType.js');
let ControllerInputType = require('./ControllerInputType.js');
let ControllerNotificationList = require('./ControllerNotificationList.js');
let ControllerNotification_state = require('./ControllerNotification_state.js');
let ServoingModeInformation = require('./ServoingModeInformation.js');
let ActionEvent = require('./ActionEvent.js');
let ProtectionZoneNotificationList = require('./ProtectionZoneNotificationList.js');
let ConfigurationChangeNotification_configuration_change = require('./ConfigurationChangeNotification_configuration_change.js');
let CartesianTrajectoryConstraint_type = require('./CartesianTrajectoryConstraint_type.js');
let ControllerBehavior = require('./ControllerBehavior.js');
let ConstrainedPose = require('./ConstrainedPose.js');
let TrajectoryErrorElement = require('./TrajectoryErrorElement.js');
let ArmStateInformation = require('./ArmStateInformation.js');
let SequenceList = require('./SequenceList.js');
let MapHandle = require('./MapHandle.js');
let FirmwareComponentVersion = require('./FirmwareComponentVersion.js');
let ControllerElementHandle_identifier = require('./ControllerElementHandle_identifier.js');
let SequenceTasksPair = require('./SequenceTasksPair.js');
let Base_ControlModeInformation = require('./Base_ControlModeInformation.js');
let TrajectoryErrorIdentifier = require('./TrajectoryErrorIdentifier.js');
let ServoingModeNotification = require('./ServoingModeNotification.js');
let SignalQuality = require('./SignalQuality.js');
let FullUserProfile = require('./FullUserProfile.js');
let Base_Stop = require('./Base_Stop.js');
let Waypoint = require('./Waypoint.js');
let BridgeList = require('./BridgeList.js');
let ActionNotification = require('./ActionNotification.js');
let Base_JointSpeeds = require('./Base_JointSpeeds.js');
let ActionExecutionState = require('./ActionExecutionState.js');
let Xbox360DigitalInputIdentifier = require('./Xbox360DigitalInputIdentifier.js');
let IPv4Configuration = require('./IPv4Configuration.js');
let MapGroup = require('./MapGroup.js');
let SequenceTask = require('./SequenceTask.js');
let Point = require('./Point.js');
let TrajectoryErrorReport = require('./TrajectoryErrorReport.js');
let MappingInfoNotification = require('./MappingInfoNotification.js');
let FirmwareBundleVersions = require('./FirmwareBundleVersions.js');
let JointTorques = require('./JointTorques.js');
let ControllerNotification = require('./ControllerNotification.js');
let Twist = require('./Twist.js');
let Base_Position = require('./Base_Position.js');
let IKData = require('./IKData.js');
let OperatingModeNotification = require('./OperatingModeNotification.js');
let Delay = require('./Delay.js');
let NetworkEvent = require('./NetworkEvent.js');
let JointSpeed = require('./JointSpeed.js');
let ConfigurationNotificationEvent = require('./ConfigurationNotificationEvent.js');
let PasswordChange = require('./PasswordChange.js');
let Orientation = require('./Orientation.js');
let BridgeConfig = require('./BridgeConfig.js');
let CommunicationInterfaceConfiguration = require('./CommunicationInterfaceConfiguration.js');
let Faults = require('./Faults.js');
let ControllerHandle = require('./ControllerHandle.js');
let NetworkNotificationList = require('./NetworkNotificationList.js');
let ConstrainedPosition = require('./ConstrainedPosition.js');
let JointAngle = require('./JointAngle.js');
let OperatingModeInformation = require('./OperatingModeInformation.js');
let WifiInformationList = require('./WifiInformationList.js');
let BridgeStatus = require('./BridgeStatus.js');
let BackupEvent = require('./BackupEvent.js');
let CartesianWaypoint = require('./CartesianWaypoint.js');
let Snapshot = require('./Snapshot.js');
let ConstrainedJointAngle = require('./ConstrainedJointAngle.js');
let BridgeType = require('./BridgeType.js');
let ActivateMapHandle = require('./ActivateMapHandle.js');
let RobotEventNotificationList = require('./RobotEventNotificationList.js');
let BaseCyclic_CustomData = require('./BaseCyclic_CustomData.js');
let ActuatorCustomData = require('./ActuatorCustomData.js');
let BaseCyclic_ServiceVersion = require('./BaseCyclic_ServiceVersion.js');
let BaseCyclic_Command = require('./BaseCyclic_Command.js');
let BaseFeedback = require('./BaseFeedback.js');
let ActuatorFeedback = require('./ActuatorFeedback.js');
let BaseCyclic_Feedback = require('./BaseCyclic_Feedback.js');
let ActuatorCommand = require('./ActuatorCommand.js');
let UARTConfiguration = require('./UARTConfiguration.js');
let NotificationHandle = require('./NotificationHandle.js');
let CountryCodeIdentifier = require('./CountryCodeIdentifier.js');
let DeviceTypes = require('./DeviceTypes.js');
let UARTStopBits = require('./UARTStopBits.js');
let Connection = require('./Connection.js');
let Empty = require('./Empty.js');
let UARTParity = require('./UARTParity.js');
let SafetyNotification = require('./SafetyNotification.js');
let CartesianReferenceFrame = require('./CartesianReferenceFrame.js');
let NotificationOptions = require('./NotificationOptions.js');
let UARTDeviceIdentification = require('./UARTDeviceIdentification.js');
let UARTSpeed = require('./UARTSpeed.js');
let DeviceHandle = require('./DeviceHandle.js');
let Unit = require('./Unit.js');
let UARTWordLength = require('./UARTWordLength.js');
let CountryCode = require('./CountryCode.js');
let SafetyStatusValue = require('./SafetyStatusValue.js');
let ArmState = require('./ArmState.js');
let NotificationType = require('./NotificationType.js');
let UserProfileHandle = require('./UserProfileHandle.js');
let Permission = require('./Permission.js');
let Timestamp = require('./Timestamp.js');
let SafetyHandle = require('./SafetyHandle.js');
let GravityVector = require('./GravityVector.js');
let ControlConfig_JointSpeeds = require('./ControlConfig_JointSpeeds.js');
let ControlConfig_ServiceVersion = require('./ControlConfig_ServiceVersion.js');
let JointSpeedSoftLimits = require('./JointSpeedSoftLimits.js');
let TwistAngularSoftLimit = require('./TwistAngularSoftLimit.js');
let AngularTwist = require('./AngularTwist.js');
let TwistLinearSoftLimit = require('./TwistLinearSoftLimit.js');
let KinematicLimits = require('./KinematicLimits.js');
let ControlConfig_ControlModeNotification = require('./ControlConfig_ControlModeNotification.js');
let ControlConfig_ControlModeInformation = require('./ControlConfig_ControlModeInformation.js');
let ToolConfiguration = require('./ToolConfiguration.js');
let KinematicLimitsList = require('./KinematicLimitsList.js');
let CartesianReferenceFrameInfo = require('./CartesianReferenceFrameInfo.js');
let JointAccelerationSoftLimits = require('./JointAccelerationSoftLimits.js');
let CartesianTransform = require('./CartesianTransform.js');
let LinearTwist = require('./LinearTwist.js');
let ControlConfig_Position = require('./ControlConfig_Position.js');
let ControlConfig_ControlMode = require('./ControlConfig_ControlMode.js');
let ControlConfigurationEvent = require('./ControlConfigurationEvent.js');
let DesiredSpeeds = require('./DesiredSpeeds.js');
let PayloadInformation = require('./PayloadInformation.js');
let ControlConfigurationNotification = require('./ControlConfigurationNotification.js');
let CalibrationParameter_value = require('./CalibrationParameter_value.js');
let PartNumber = require('./PartNumber.js');
let RebootRqst = require('./RebootRqst.js');
let SafetyConfiguration = require('./SafetyConfiguration.js');
let PartNumberRevision = require('./PartNumberRevision.js');
let CalibrationStatus = require('./CalibrationStatus.js');
let SafetyInformation = require('./SafetyInformation.js');
let SerialNumber = require('./SerialNumber.js');
let DeviceConfig_CapSenseMode = require('./DeviceConfig_CapSenseMode.js');
let SafetyStatus = require('./SafetyStatus.js');
let RunModes = require('./RunModes.js');
let ModelNumber = require('./ModelNumber.js');
let CalibrationResult = require('./CalibrationResult.js');
let SafetyEnable = require('./SafetyEnable.js');
let IPv4Settings = require('./IPv4Settings.js');
let MACAddress = require('./MACAddress.js');
let CapSenseRegister = require('./CapSenseRegister.js');
let DeviceConfig_CapSenseConfig = require('./DeviceConfig_CapSenseConfig.js');
let SafetyThreshold = require('./SafetyThreshold.js');
let DeviceType = require('./DeviceType.js');
let BootloaderVersion = require('./BootloaderVersion.js');
let CalibrationElement = require('./CalibrationElement.js');
let DeviceConfig_ServiceVersion = require('./DeviceConfig_ServiceVersion.js');
let CalibrationParameter = require('./CalibrationParameter.js');
let RunMode = require('./RunMode.js');
let SafetyInformationList = require('./SafetyInformationList.js');
let PowerOnSelfTestResult = require('./PowerOnSelfTestResult.js');
let CalibrationItem = require('./CalibrationItem.js');
let DeviceConfig_SafetyLimitType = require('./DeviceConfig_SafetyLimitType.js');
let SafetyConfigurationList = require('./SafetyConfigurationList.js');
let Calibration = require('./Calibration.js');
let FirmwareVersion = require('./FirmwareVersion.js');
let DeviceManager_ServiceVersion = require('./DeviceManager_ServiceVersion.js');
let DeviceHandles = require('./DeviceHandles.js');
let RobotiqGripperStatusFlags = require('./RobotiqGripperStatusFlags.js');
let GripperConfig_SafetyIdentifier = require('./GripperConfig_SafetyIdentifier.js');
let CustomDataUnit = require('./CustomDataUnit.js');
let GripperCyclic_ServiceVersion = require('./GripperCyclic_ServiceVersion.js');
let MotorFeedback = require('./MotorFeedback.js');
let GripperCyclic_MessageId = require('./GripperCyclic_MessageId.js');
let GripperCyclic_Command = require('./GripperCyclic_Command.js');
let GripperCyclic_CustomData = require('./GripperCyclic_CustomData.js');
let MotorCommand = require('./MotorCommand.js');
let GripperCyclic_Feedback = require('./GripperCyclic_Feedback.js');
let GPIOIdentification = require('./GPIOIdentification.js');
let I2CDeviceIdentification = require('./I2CDeviceIdentification.js');
let I2CRegisterAddressSize = require('./I2CRegisterAddressSize.js');
let InterconnectConfig_SafetyIdentifier = require('./InterconnectConfig_SafetyIdentifier.js');
let I2CReadParameter = require('./I2CReadParameter.js');
let GPIOState = require('./GPIOState.js');
let I2CData = require('./I2CData.js');
let InterconnectConfig_ServiceVersion = require('./InterconnectConfig_ServiceVersion.js');
let I2CConfiguration = require('./I2CConfiguration.js');
let I2CDeviceAddressing = require('./I2CDeviceAddressing.js');
let GPIOMode = require('./GPIOMode.js');
let GPIOIdentifier = require('./GPIOIdentifier.js');
let UARTPortId = require('./UARTPortId.js');
let EthernetConfiguration = require('./EthernetConfiguration.js');
let EthernetDuplex = require('./EthernetDuplex.js');
let GPIOValue = require('./GPIOValue.js');
let GPIOPull = require('./GPIOPull.js');
let I2CWriteRegisterParameter = require('./I2CWriteRegisterParameter.js');
let EthernetDevice = require('./EthernetDevice.js');
let I2CWriteParameter = require('./I2CWriteParameter.js');
let EthernetSpeed = require('./EthernetSpeed.js');
let EthernetDeviceIdentification = require('./EthernetDeviceIdentification.js');
let I2CReadRegisterParameter = require('./I2CReadRegisterParameter.js');
let I2CDevice = require('./I2CDevice.js');
let InterconnectConfig_GPIOConfiguration = require('./InterconnectConfig_GPIOConfiguration.js');
let I2CMode = require('./I2CMode.js');
let InterconnectCyclic_Feedback = require('./InterconnectCyclic_Feedback.js');
let InterconnectCyclic_Command_tool_command = require('./InterconnectCyclic_Command_tool_command.js');
let InterconnectCyclic_Command = require('./InterconnectCyclic_Command.js');
let InterconnectCyclic_ServiceVersion = require('./InterconnectCyclic_ServiceVersion.js');
let InterconnectCyclic_CustomData = require('./InterconnectCyclic_CustomData.js');
let InterconnectCyclic_Feedback_tool_feedback = require('./InterconnectCyclic_Feedback_tool_feedback.js');
let InterconnectCyclic_MessageId = require('./InterconnectCyclic_MessageId.js');
let InterconnectCyclic_CustomData_tool_customData = require('./InterconnectCyclic_CustomData_tool_customData.js');
let VisionModuleType = require('./VisionModuleType.js');
let ProductConfigurationEndEffectorType = require('./ProductConfigurationEndEffectorType.js');
let WristType = require('./WristType.js');
let BaseType = require('./BaseType.js');
let EndEffectorType = require('./EndEffectorType.js');
let CompleteProductConfiguration = require('./CompleteProductConfiguration.js');
let ModelId = require('./ModelId.js');
let ArmLaterality = require('./ArmLaterality.js');
let InterfaceModuleType = require('./InterfaceModuleType.js');
let Sensor = require('./Sensor.js');
let DistortionCoefficients = require('./DistortionCoefficients.js');
let BitRate = require('./BitRate.js');
let ManualFocus = require('./ManualFocus.js');
let Option = require('./Option.js');
let OptionIdentifier = require('./OptionIdentifier.js');
let FocusAction = require('./FocusAction.js');
let VisionConfig_RotationMatrix = require('./VisionConfig_RotationMatrix.js');
let FocusPoint = require('./FocusPoint.js');
let VisionNotification = require('./VisionNotification.js');
let FrameRate = require('./FrameRate.js');
let TranslationVector = require('./TranslationVector.js');
let IntrinsicProfileIdentifier = require('./IntrinsicProfileIdentifier.js');
let ExtrinsicParameters = require('./ExtrinsicParameters.js');
let Resolution = require('./Resolution.js');
let SensorSettings = require('./SensorSettings.js');
let OptionInformation = require('./OptionInformation.js');
let SensorFocusAction_action_parameters = require('./SensorFocusAction_action_parameters.js');
let VisionConfig_ServiceVersion = require('./VisionConfig_ServiceVersion.js');
let VisionEvent = require('./VisionEvent.js');
let IntrinsicParameters = require('./IntrinsicParameters.js');
let SensorIdentifier = require('./SensorIdentifier.js');
let VisionConfig_RotationMatrixRow = require('./VisionConfig_RotationMatrixRow.js');
let SensorFocusAction = require('./SensorFocusAction.js');
let OptionValue = require('./OptionValue.js');
let FollowCartesianTrajectoryResult = require('./FollowCartesianTrajectoryResult.js');
let FollowCartesianTrajectoryFeedback = require('./FollowCartesianTrajectoryFeedback.js');
let FollowCartesianTrajectoryActionGoal = require('./FollowCartesianTrajectoryActionGoal.js');
let FollowCartesianTrajectoryGoal = require('./FollowCartesianTrajectoryGoal.js');
let FollowCartesianTrajectoryActionFeedback = require('./FollowCartesianTrajectoryActionFeedback.js');
let FollowCartesianTrajectoryAction = require('./FollowCartesianTrajectoryAction.js');
let FollowCartesianTrajectoryActionResult = require('./FollowCartesianTrajectoryActionResult.js');

module.exports = {
  ApiOptions: ApiOptions,
  KortexError: KortexError,
  ErrorCodes: ErrorCodes,
  SubErrorCodes: SubErrorCodes,
  VectorDriveParameters: VectorDriveParameters,
  CoggingFeedforwardModeInformation: CoggingFeedforwardModeInformation,
  CustomDataSelection: CustomDataSelection,
  Servoing: Servoing,
  TorqueCalibration: TorqueCalibration,
  ActuatorConfig_SafetyLimitType: ActuatorConfig_SafetyLimitType,
  ControlLoop: ControlLoop,
  FrequencyResponse: FrequencyResponse,
  PositionCommand: PositionCommand,
  AxisPosition: AxisPosition,
  StepResponse: StepResponse,
  SafetyIdentifierBankA: SafetyIdentifierBankA,
  ActuatorConfig_ServiceVersion: ActuatorConfig_ServiceVersion,
  CoggingFeedforwardMode: CoggingFeedforwardMode,
  CommandModeInformation: CommandModeInformation,
  CommandMode: CommandMode,
  ControlLoopSelection: ControlLoopSelection,
  ActuatorConfig_ControlModeInformation: ActuatorConfig_ControlModeInformation,
  ActuatorConfig_ControlMode: ActuatorConfig_ControlMode,
  TorqueOffset: TorqueOffset,
  ControlLoopParameters: ControlLoopParameters,
  LoopSelection: LoopSelection,
  AxisOffsets: AxisOffsets,
  EncoderDerivativeParameters: EncoderDerivativeParameters,
  RampResponse: RampResponse,
  CustomDataIndex: CustomDataIndex,
  ActuatorCyclic_ServiceVersion: ActuatorCyclic_ServiceVersion,
  StatusFlags: StatusFlags,
  ActuatorCyclic_MessageId: ActuatorCyclic_MessageId,
  ActuatorCyclic_CustomData: ActuatorCyclic_CustomData,
  CommandFlags: CommandFlags,
  ActuatorCyclic_Command: ActuatorCyclic_Command,
  ActuatorCyclic_Feedback: ActuatorCyclic_Feedback,
  ControllerConfiguration: ControllerConfiguration,
  SequenceTaskConfiguration: SequenceTaskConfiguration,
  SwitchControlMapping: SwitchControlMapping,
  SafetyNotificationList: SafetyNotificationList,
  AdvancedSequenceHandle: AdvancedSequenceHandle,
  NetworkType: NetworkType,
  EmergencyStop: EmergencyStop,
  ActionType: ActionType,
  SequenceTaskHandle: SequenceTaskHandle,
  SnapshotType: SnapshotType,
  Sequence: Sequence,
  JointLimitation: JointLimitation,
  SequenceInfoNotification: SequenceInfoNotification,
  SequenceTasksRange: SequenceTasksRange,
  Mapping: Mapping,
  Ssid: Ssid,
  Waypoint_type_of_waypoint: Waypoint_type_of_waypoint,
  JointTrajectoryConstraintType: JointTrajectoryConstraintType,
  ConstrainedOrientation: ConstrainedOrientation,
  Base_SafetyIdentifier: Base_SafetyIdentifier,
  JointsLimitationsList: JointsLimitationsList,
  MapGroupHandle: MapGroupHandle,
  WrenchMode: WrenchMode,
  BridgePortConfig: BridgePortConfig,
  ProtectionZone: ProtectionZone,
  WrenchLimitation: WrenchLimitation,
  ActuatorInformation: ActuatorInformation,
  TransformationRow: TransformationRow,
  WristDigitalInputIdentifier: WristDigitalInputIdentifier,
  GpioPinPropertyFlags: GpioPinPropertyFlags,
  TwistLimitation: TwistLimitation,
  MappingInfoNotificationList: MappingInfoNotificationList,
  SafetyEvent: SafetyEvent,
  Action: Action,
  SequenceInformation: SequenceInformation,
  Base_RotationMatrixRow: Base_RotationMatrixRow,
  OperatingMode: OperatingMode,
  LedState: LedState,
  TrajectoryInfoType: TrajectoryInfoType,
  SequenceTasks: SequenceTasks,
  KinematicTrajectoryConstraints: KinematicTrajectoryConstraints,
  TwistCommand: TwistCommand,
  WifiEncryptionType: WifiEncryptionType,
  ControlModeNotificationList: ControlModeNotificationList,
  ProtectionZoneHandle: ProtectionZoneHandle,
  SystemTime: SystemTime,
  ArmStateNotification: ArmStateNotification,
  NetworkHandle: NetworkHandle,
  BridgeIdentifier: BridgeIdentifier,
  Base_ControlMode: Base_ControlMode,
  MapElement: MapElement,
  BridgeResult: BridgeResult,
  MapGroupList: MapGroupList,
  ProtectionZoneInformation: ProtectionZoneInformation,
  ChangeWrench: ChangeWrench,
  PreComputedJointTrajectoryElement: PreComputedJointTrajectoryElement,
  ControllerType: ControllerType,
  MappingList: MappingList,
  Base_ServiceVersion: Base_ServiceVersion,
  JointTorque: JointTorque,
  JointNavigationDirection: JointNavigationDirection,
  Base_GpioConfiguration: Base_GpioConfiguration,
  ConstrainedJointAngles: ConstrainedJointAngles,
  ConfigurationChangeNotification: ConfigurationChangeNotification,
  GpioCommand: GpioCommand,
  Base_CapSenseConfig: Base_CapSenseConfig,
  ZoneShape: ZoneShape,
  Admittance: Admittance,
  UserProfile: UserProfile,
  ControllerState: ControllerState,
  UserList: UserList,
  Base_CapSenseMode: Base_CapSenseMode,
  WifiSecurityType: WifiSecurityType,
  ProtectionZoneList: ProtectionZoneList,
  CartesianSpeed: CartesianSpeed,
  MapEvent: MapEvent,
  SoundType: SoundType,
  SequenceTasksConfiguration: SequenceTasksConfiguration,
  WaypointList: WaypointList,
  FactoryEvent: FactoryEvent,
  CartesianTrajectoryConstraint: CartesianTrajectoryConstraint,
  TransformationMatrix: TransformationMatrix,
  Map: Map,
  IPv4Information: IPv4Information,
  FactoryNotification: FactoryNotification,
  ServoingMode: ServoingMode,
  WifiConfiguration: WifiConfiguration,
  ConfigurationChangeNotificationList: ConfigurationChangeNotificationList,
  EventIdSequenceInfoNotification: EventIdSequenceInfoNotification,
  UserEvent: UserEvent,
  ControllerElementHandle: ControllerElementHandle,
  UserNotificationList: UserNotificationList,
  PreComputedJointTrajectory: PreComputedJointTrajectory,
  GpioAction: GpioAction,
  ChangeTwist: ChangeTwist,
  AdmittanceMode: AdmittanceMode,
  ActionList: ActionList,
  ChangeJointSpeeds: ChangeJointSpeeds,
  GpioEvent: GpioEvent,
  MappingHandle: MappingHandle,
  WaypointValidationReport: WaypointValidationReport,
  Finger: Finger,
  ShapeType: ShapeType,
  GripperRequest: GripperRequest,
  Wrench: Wrench,
  AppendActionInformation: AppendActionInformation,
  ControllerConfigurationList: ControllerConfigurationList,
  FullIPv4Configuration: FullIPv4Configuration,
  RobotEventNotification: RobotEventNotification,
  RobotEvent: RobotEvent,
  JointAngles: JointAngles,
  UserProfileList: UserProfileList,
  ActionHandle: ActionHandle,
  GripperCommand: GripperCommand,
  ControllerEvent: ControllerEvent,
  ActionNotificationList: ActionNotificationList,
  UserNotification: UserNotification,
  GpioPinConfiguration: GpioPinConfiguration,
  ControllerConfigurationMode: ControllerConfigurationMode,
  ControllerEventType: ControllerEventType,
  ServoingModeNotificationList: ServoingModeNotificationList,
  TrajectoryErrorType: TrajectoryErrorType,
  GpioConfigurationList: GpioConfigurationList,
  RequestedActionType: RequestedActionType,
  WifiInformation: WifiInformation,
  ControllerList: ControllerList,
  SequenceInfoNotificationList: SequenceInfoNotificationList,
  GripperMode: GripperMode,
  Gripper: Gripper,
  Base_ControlModeNotification: Base_ControlModeNotification,
  OperatingModeNotificationList: OperatingModeNotificationList,
  Pose: Pose,
  TrajectoryInfo: TrajectoryInfo,
  GpioBehavior: GpioBehavior,
  AngularWaypoint: AngularWaypoint,
  Query: Query,
  CartesianLimitation: CartesianLimitation,
  NavigationDirection: NavigationDirection,
  Action_action_parameters: Action_action_parameters,
  Xbox360AnalogInputIdentifier: Xbox360AnalogInputIdentifier,
  WrenchCommand: WrenchCommand,
  NetworkNotification: NetworkNotification,
  Gen3GpioPinId: Gen3GpioPinId,
  MapEvent_events: MapEvent_events,
  WifiConfigurationList: WifiConfigurationList,
  Timeout: Timeout,
  ProtectionZoneNotification: ProtectionZoneNotification,
  CartesianLimitationList: CartesianLimitationList,
  MapList: MapList,
  ProtectionZoneEvent: ProtectionZoneEvent,
  JointTrajectoryConstraint: JointTrajectoryConstraint,
  TrajectoryContinuityMode: TrajectoryContinuityMode,
  LimitationType: LimitationType,
  Base_RotationMatrix: Base_RotationMatrix,
  SequenceHandle: SequenceHandle,
  ControllerElementState: ControllerElementState,
  ControllerElementEventType: ControllerElementEventType,
  ControllerInputType: ControllerInputType,
  ControllerNotificationList: ControllerNotificationList,
  ControllerNotification_state: ControllerNotification_state,
  ServoingModeInformation: ServoingModeInformation,
  ActionEvent: ActionEvent,
  ProtectionZoneNotificationList: ProtectionZoneNotificationList,
  ConfigurationChangeNotification_configuration_change: ConfigurationChangeNotification_configuration_change,
  CartesianTrajectoryConstraint_type: CartesianTrajectoryConstraint_type,
  ControllerBehavior: ControllerBehavior,
  ConstrainedPose: ConstrainedPose,
  TrajectoryErrorElement: TrajectoryErrorElement,
  ArmStateInformation: ArmStateInformation,
  SequenceList: SequenceList,
  MapHandle: MapHandle,
  FirmwareComponentVersion: FirmwareComponentVersion,
  ControllerElementHandle_identifier: ControllerElementHandle_identifier,
  SequenceTasksPair: SequenceTasksPair,
  Base_ControlModeInformation: Base_ControlModeInformation,
  TrajectoryErrorIdentifier: TrajectoryErrorIdentifier,
  ServoingModeNotification: ServoingModeNotification,
  SignalQuality: SignalQuality,
  FullUserProfile: FullUserProfile,
  Base_Stop: Base_Stop,
  Waypoint: Waypoint,
  BridgeList: BridgeList,
  ActionNotification: ActionNotification,
  Base_JointSpeeds: Base_JointSpeeds,
  ActionExecutionState: ActionExecutionState,
  Xbox360DigitalInputIdentifier: Xbox360DigitalInputIdentifier,
  IPv4Configuration: IPv4Configuration,
  MapGroup: MapGroup,
  SequenceTask: SequenceTask,
  Point: Point,
  TrajectoryErrorReport: TrajectoryErrorReport,
  MappingInfoNotification: MappingInfoNotification,
  FirmwareBundleVersions: FirmwareBundleVersions,
  JointTorques: JointTorques,
  ControllerNotification: ControllerNotification,
  Twist: Twist,
  Base_Position: Base_Position,
  IKData: IKData,
  OperatingModeNotification: OperatingModeNotification,
  Delay: Delay,
  NetworkEvent: NetworkEvent,
  JointSpeed: JointSpeed,
  ConfigurationNotificationEvent: ConfigurationNotificationEvent,
  PasswordChange: PasswordChange,
  Orientation: Orientation,
  BridgeConfig: BridgeConfig,
  CommunicationInterfaceConfiguration: CommunicationInterfaceConfiguration,
  Faults: Faults,
  ControllerHandle: ControllerHandle,
  NetworkNotificationList: NetworkNotificationList,
  ConstrainedPosition: ConstrainedPosition,
  JointAngle: JointAngle,
  OperatingModeInformation: OperatingModeInformation,
  WifiInformationList: WifiInformationList,
  BridgeStatus: BridgeStatus,
  BackupEvent: BackupEvent,
  CartesianWaypoint: CartesianWaypoint,
  Snapshot: Snapshot,
  ConstrainedJointAngle: ConstrainedJointAngle,
  BridgeType: BridgeType,
  ActivateMapHandle: ActivateMapHandle,
  RobotEventNotificationList: RobotEventNotificationList,
  BaseCyclic_CustomData: BaseCyclic_CustomData,
  ActuatorCustomData: ActuatorCustomData,
  BaseCyclic_ServiceVersion: BaseCyclic_ServiceVersion,
  BaseCyclic_Command: BaseCyclic_Command,
  BaseFeedback: BaseFeedback,
  ActuatorFeedback: ActuatorFeedback,
  BaseCyclic_Feedback: BaseCyclic_Feedback,
  ActuatorCommand: ActuatorCommand,
  UARTConfiguration: UARTConfiguration,
  NotificationHandle: NotificationHandle,
  CountryCodeIdentifier: CountryCodeIdentifier,
  DeviceTypes: DeviceTypes,
  UARTStopBits: UARTStopBits,
  Connection: Connection,
  Empty: Empty,
  UARTParity: UARTParity,
  SafetyNotification: SafetyNotification,
  CartesianReferenceFrame: CartesianReferenceFrame,
  NotificationOptions: NotificationOptions,
  UARTDeviceIdentification: UARTDeviceIdentification,
  UARTSpeed: UARTSpeed,
  DeviceHandle: DeviceHandle,
  Unit: Unit,
  UARTWordLength: UARTWordLength,
  CountryCode: CountryCode,
  SafetyStatusValue: SafetyStatusValue,
  ArmState: ArmState,
  NotificationType: NotificationType,
  UserProfileHandle: UserProfileHandle,
  Permission: Permission,
  Timestamp: Timestamp,
  SafetyHandle: SafetyHandle,
  GravityVector: GravityVector,
  ControlConfig_JointSpeeds: ControlConfig_JointSpeeds,
  ControlConfig_ServiceVersion: ControlConfig_ServiceVersion,
  JointSpeedSoftLimits: JointSpeedSoftLimits,
  TwistAngularSoftLimit: TwistAngularSoftLimit,
  AngularTwist: AngularTwist,
  TwistLinearSoftLimit: TwistLinearSoftLimit,
  KinematicLimits: KinematicLimits,
  ControlConfig_ControlModeNotification: ControlConfig_ControlModeNotification,
  ControlConfig_ControlModeInformation: ControlConfig_ControlModeInformation,
  ToolConfiguration: ToolConfiguration,
  KinematicLimitsList: KinematicLimitsList,
  CartesianReferenceFrameInfo: CartesianReferenceFrameInfo,
  JointAccelerationSoftLimits: JointAccelerationSoftLimits,
  CartesianTransform: CartesianTransform,
  LinearTwist: LinearTwist,
  ControlConfig_Position: ControlConfig_Position,
  ControlConfig_ControlMode: ControlConfig_ControlMode,
  ControlConfigurationEvent: ControlConfigurationEvent,
  DesiredSpeeds: DesiredSpeeds,
  PayloadInformation: PayloadInformation,
  ControlConfigurationNotification: ControlConfigurationNotification,
  CalibrationParameter_value: CalibrationParameter_value,
  PartNumber: PartNumber,
  RebootRqst: RebootRqst,
  SafetyConfiguration: SafetyConfiguration,
  PartNumberRevision: PartNumberRevision,
  CalibrationStatus: CalibrationStatus,
  SafetyInformation: SafetyInformation,
  SerialNumber: SerialNumber,
  DeviceConfig_CapSenseMode: DeviceConfig_CapSenseMode,
  SafetyStatus: SafetyStatus,
  RunModes: RunModes,
  ModelNumber: ModelNumber,
  CalibrationResult: CalibrationResult,
  SafetyEnable: SafetyEnable,
  IPv4Settings: IPv4Settings,
  MACAddress: MACAddress,
  CapSenseRegister: CapSenseRegister,
  DeviceConfig_CapSenseConfig: DeviceConfig_CapSenseConfig,
  SafetyThreshold: SafetyThreshold,
  DeviceType: DeviceType,
  BootloaderVersion: BootloaderVersion,
  CalibrationElement: CalibrationElement,
  DeviceConfig_ServiceVersion: DeviceConfig_ServiceVersion,
  CalibrationParameter: CalibrationParameter,
  RunMode: RunMode,
  SafetyInformationList: SafetyInformationList,
  PowerOnSelfTestResult: PowerOnSelfTestResult,
  CalibrationItem: CalibrationItem,
  DeviceConfig_SafetyLimitType: DeviceConfig_SafetyLimitType,
  SafetyConfigurationList: SafetyConfigurationList,
  Calibration: Calibration,
  FirmwareVersion: FirmwareVersion,
  DeviceManager_ServiceVersion: DeviceManager_ServiceVersion,
  DeviceHandles: DeviceHandles,
  RobotiqGripperStatusFlags: RobotiqGripperStatusFlags,
  GripperConfig_SafetyIdentifier: GripperConfig_SafetyIdentifier,
  CustomDataUnit: CustomDataUnit,
  GripperCyclic_ServiceVersion: GripperCyclic_ServiceVersion,
  MotorFeedback: MotorFeedback,
  GripperCyclic_MessageId: GripperCyclic_MessageId,
  GripperCyclic_Command: GripperCyclic_Command,
  GripperCyclic_CustomData: GripperCyclic_CustomData,
  MotorCommand: MotorCommand,
  GripperCyclic_Feedback: GripperCyclic_Feedback,
  GPIOIdentification: GPIOIdentification,
  I2CDeviceIdentification: I2CDeviceIdentification,
  I2CRegisterAddressSize: I2CRegisterAddressSize,
  InterconnectConfig_SafetyIdentifier: InterconnectConfig_SafetyIdentifier,
  I2CReadParameter: I2CReadParameter,
  GPIOState: GPIOState,
  I2CData: I2CData,
  InterconnectConfig_ServiceVersion: InterconnectConfig_ServiceVersion,
  I2CConfiguration: I2CConfiguration,
  I2CDeviceAddressing: I2CDeviceAddressing,
  GPIOMode: GPIOMode,
  GPIOIdentifier: GPIOIdentifier,
  UARTPortId: UARTPortId,
  EthernetConfiguration: EthernetConfiguration,
  EthernetDuplex: EthernetDuplex,
  GPIOValue: GPIOValue,
  GPIOPull: GPIOPull,
  I2CWriteRegisterParameter: I2CWriteRegisterParameter,
  EthernetDevice: EthernetDevice,
  I2CWriteParameter: I2CWriteParameter,
  EthernetSpeed: EthernetSpeed,
  EthernetDeviceIdentification: EthernetDeviceIdentification,
  I2CReadRegisterParameter: I2CReadRegisterParameter,
  I2CDevice: I2CDevice,
  InterconnectConfig_GPIOConfiguration: InterconnectConfig_GPIOConfiguration,
  I2CMode: I2CMode,
  InterconnectCyclic_Feedback: InterconnectCyclic_Feedback,
  InterconnectCyclic_Command_tool_command: InterconnectCyclic_Command_tool_command,
  InterconnectCyclic_Command: InterconnectCyclic_Command,
  InterconnectCyclic_ServiceVersion: InterconnectCyclic_ServiceVersion,
  InterconnectCyclic_CustomData: InterconnectCyclic_CustomData,
  InterconnectCyclic_Feedback_tool_feedback: InterconnectCyclic_Feedback_tool_feedback,
  InterconnectCyclic_MessageId: InterconnectCyclic_MessageId,
  InterconnectCyclic_CustomData_tool_customData: InterconnectCyclic_CustomData_tool_customData,
  VisionModuleType: VisionModuleType,
  ProductConfigurationEndEffectorType: ProductConfigurationEndEffectorType,
  WristType: WristType,
  BaseType: BaseType,
  EndEffectorType: EndEffectorType,
  CompleteProductConfiguration: CompleteProductConfiguration,
  ModelId: ModelId,
  ArmLaterality: ArmLaterality,
  InterfaceModuleType: InterfaceModuleType,
  Sensor: Sensor,
  DistortionCoefficients: DistortionCoefficients,
  BitRate: BitRate,
  ManualFocus: ManualFocus,
  Option: Option,
  OptionIdentifier: OptionIdentifier,
  FocusAction: FocusAction,
  VisionConfig_RotationMatrix: VisionConfig_RotationMatrix,
  FocusPoint: FocusPoint,
  VisionNotification: VisionNotification,
  FrameRate: FrameRate,
  TranslationVector: TranslationVector,
  IntrinsicProfileIdentifier: IntrinsicProfileIdentifier,
  ExtrinsicParameters: ExtrinsicParameters,
  Resolution: Resolution,
  SensorSettings: SensorSettings,
  OptionInformation: OptionInformation,
  SensorFocusAction_action_parameters: SensorFocusAction_action_parameters,
  VisionConfig_ServiceVersion: VisionConfig_ServiceVersion,
  VisionEvent: VisionEvent,
  IntrinsicParameters: IntrinsicParameters,
  SensorIdentifier: SensorIdentifier,
  VisionConfig_RotationMatrixRow: VisionConfig_RotationMatrixRow,
  SensorFocusAction: SensorFocusAction,
  OptionValue: OptionValue,
  FollowCartesianTrajectoryResult: FollowCartesianTrajectoryResult,
  FollowCartesianTrajectoryFeedback: FollowCartesianTrajectoryFeedback,
  FollowCartesianTrajectoryActionGoal: FollowCartesianTrajectoryActionGoal,
  FollowCartesianTrajectoryGoal: FollowCartesianTrajectoryGoal,
  FollowCartesianTrajectoryActionFeedback: FollowCartesianTrajectoryActionFeedback,
  FollowCartesianTrajectoryAction: FollowCartesianTrajectoryAction,
  FollowCartesianTrajectoryActionResult: FollowCartesianTrajectoryActionResult,
};
