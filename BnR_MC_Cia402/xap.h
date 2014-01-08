# define COMPUTED_PI_OUT_SIZE 80
typedef struct 
{
	unsigned CN2_M00_OutChannel_REC_StatusWord:16;
	unsigned CN2_M00_OutChannel_REC_ErrorCode:16;
	unsigned CN2_MC0_OutChannel_REC_ActualVelocity:32;
	unsigned CN2_MC0_OutChannel_REC_ActualPosition:32;
	unsigned CN2_M00_OutChannel_REC_MaxProfileVelocity:32;
	unsigned CN2_M00_OutChannel_REC_MaxProfileAcceleration:32;
	unsigned CN2_M00_OutChannel_REC_MaxProfileDeceleration:32;
	unsigned CN2_M00_OutChannel_REC_FollowingErrorWindow:32;
	unsigned CN2_M00_OutChannel_REC_FollowingErrorTimeout:16;
	unsigned PADDING_VAR_1:16;
	unsigned CN2_M00_OutChannel_REC_PositionWindow:32;
	unsigned CN2_M00_OutChannel_REC_PositionWindowTime:16;
	unsigned PADDING_VAR_2:16;
	unsigned CN2_M00_OutChannel_REC_EncoderIncrements:32;
	unsigned CN2_M00_OutChannel_REC_MotorRevolutions:32;
	unsigned CN2_MC0_OutChannel_REC_MinSoftwarePositionLimit:32;
	unsigned CN2_MC0_OutChannel_REC_MaxSoftwarePositionLimit:32;
	unsigned CN2_M00_OutChannel_REC_SupportedDriveModes:32;
	unsigned CN2_MC0_OutChannel_REC_ActualTorque:16;
	unsigned CN2_MC0_OutChannel_REC_ActualCurrent:16;
	unsigned CN2_M00_OutChannel_REC_MaxTorque:16;
	unsigned CN2_M00_OutChannel_REC_MaxCurrent:16;
	unsigned CN2_M00_OutChannel_REC_MotorRatedTorque:32;
	unsigned CN2_M00_OutChannel_REC_MotorRatedCurrent:32;
	unsigned CN2_M00_OutChannel_REC_DisplayModeOfOperation:8;
	unsigned PADDING_VAR_3:24;
} PI_OUT;

# define COMPUTED_PI_IN_SIZE 92
typedef struct 
{
	unsigned CN2_M80_InputChannel_REC_ControlWord:16;
	unsigned PADDING_VAR_1:16;
	unsigned CN2_M40_InputChannel_REC_TargetPosition:32;
	unsigned CN2_M40_InputChannel_REC_TargetVelocity:32;
	unsigned CN2_M80_InputChannel_REC_ProfileVelocity:32;
	unsigned CN2_M80_InputChannel_REC_ProfileAcceleration:32;
	unsigned CN2_M80_InputChannel_REC_ProfileDeceleration:32;
	unsigned CN2_M40_InputChannel_REC_HomeOffset:32;
	unsigned CN2_M80_InputChannel_REC_HomingSwitchVelocity:32;
	unsigned CN2_M80_InputChannel_REC_HomingZeroVelocity:32;
	unsigned CN2_M80_InputChannel_REC_HomeAcceleration:32;
	unsigned CN2_M40_InputChannel_REC_HaltCode:16;
	unsigned CN2_M40_InputChannel_REC_FaultReactionCode:16;
	unsigned CN2_M40_InputChannel_REC_AbortOptionCode:16;
	unsigned CN2_M40_InputChannel_REC_QuickStopCode:16;
	unsigned CN2_M40_InputChannel_REC_ShutDownCode:16;
	unsigned CN2_M40_InputChannel_REC_DisableOperationCode:16;
	unsigned CN2_M80_InputChannel_REC_SetMaxProfileVelocity:32;
	unsigned CN2_M80_InputChannel_REC_SetMaxProfileAcceleration:32;
	unsigned CN2_M80_InputChannel_REC_SetMaxProfileDeceleration:32;
	unsigned CN2_M80_InputChannel_REC_SetFollowingErrorWindow:32;
	unsigned CN2_M80_InputChannel_REC_SetPositionWindowTime:16;
	unsigned PADDING_VAR_2:16;
	unsigned CN2_M80_InputChannel_REC_SetEncoderIncrements:32;
	unsigned CN2_M80_InputChannel_REC_SetMotorRevolutions:32;
	unsigned CN2_M40_InputChannel_REC_SetMinSoftwareLimit:32;
	unsigned CN2_M40_InputChannel_REC_SetMaxSoftwareLimit:32;
	unsigned CN2_M80_InputChannel_REC_ModesOfOperation:8;
	unsigned CN2_M80_InputChannel_REC_HomingMethod:8;
	unsigned CN2_MC0_InputChannel_REC_Polarity:8;
	unsigned PADDING_VAR_3:8;
} PI_IN;