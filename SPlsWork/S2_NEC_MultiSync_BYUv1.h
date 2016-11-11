#ifndef __S2_NEC_MULTISYNC_BYUV1_H__
#define __S2_NEC_MULTISYNC_BYUV1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_NEC_MultiSync_BYUv1_POLL_MAIN_INFO_DIG_INPUT 0
#define __S2_NEC_MultiSync_BYUv1_POLL_MAIN_INFO_NO_VOLUME_DIG_INPUT 1
#define __S2_NEC_MultiSync_BYUv1_TURN_POWER_ON_DIG_INPUT 2
#define __S2_NEC_MultiSync_BYUv1_TURN_POWER_OFF_DIG_INPUT 3
#define __S2_NEC_MultiSync_BYUv1_TURN_MUTE_ON_DIG_INPUT 4
#define __S2_NEC_MultiSync_BYUv1_TURN_MUTE_OFF_DIG_INPUT 5
#define __S2_NEC_MultiSync_BYUv1_SAVE_CURRENT_SETTINGS_DIG_INPUT 6
#define __S2_NEC_MultiSync_BYUv1_SET_TV_CHANNEL_DIG_INPUT 7
#define __S2_NEC_MultiSync_BYUv1_TV_CHANNEL_UP_DIG_INPUT 8
#define __S2_NEC_MultiSync_BYUv1_TV_CHANNEL_DOWN_DIG_INPUT 9
#define __S2_NEC_MultiSync_BYUv1_LOCK_CONTROL_BUTTON_DIG_INPUT 10
#define __S2_NEC_MultiSync_BYUv1_UNLOCK_CONTROL_BUTTON_DIG_INPUT 11
#define __S2_NEC_MultiSync_BYUv1_TOGGLE_POWER_DIG_INPUT 12
#define __S2_NEC_MultiSync_BYUv1_TOGGLE_MUTE_DIG_INPUT 13
#define __S2_NEC_MultiSync_BYUv1_VOL_UP_DIG_INPUT 14
#define __S2_NEC_MultiSync_BYUv1_VOL_DOWN_DIG_INPUT 15
#define __S2_NEC_MultiSync_BYUv1_GUIDE_DIG_INPUT 16
#define __S2_NEC_MultiSync_BYUv1_NUMERIC_FORMAT_DIG_INPUT 17
#define __S2_NEC_MultiSync_BYUv1_NUMBERIC_ENT_DIG_INPUT 18
#define __S2_NEC_MultiSync_BYUv1_DISPLAY_DIG_INPUT 19
#define __S2_NEC_MultiSync_BYUv1_MENU_DIG_INPUT 20
#define __S2_NEC_MultiSync_BYUv1_EXIT_DIG_INPUT 21
#define __S2_NEC_MultiSync_BYUv1_AUTOSETUP_DIG_INPUT 22
#define __S2_NEC_MultiSync_BYUv1_UP_DIG_INPUT 23
#define __S2_NEC_MultiSync_BYUv1_DOWN_DIG_INPUT 24
#define __S2_NEC_MultiSync_BYUv1_LEFT_D_DIG_INPUT 25
#define __S2_NEC_MultiSync_BYUv1_RIGHT_D_DIG_INPUT 26
#define __S2_NEC_MultiSync_BYUv1_SETBUTTON_DIG_INPUT 27
#define __S2_NEC_MultiSync_BYUv1_PICTURE_MODE_DIG_INPUT 28
#define __S2_NEC_MultiSync_BYUv1_ASPECT_DIG_INPUT 29
#define __S2_NEC_MultiSync_BYUv1_SOUND_DIG_INPUT 30

#define __S2_NEC_MultiSync_BYUv1_NUMBERS_DIG_INPUT 31
#define __S2_NEC_MultiSync_BYUv1_NUMBERS_ARRAY_LENGTH 10

/*
* ANALOG_INPUT
*/
#define __S2_NEC_MultiSync_BYUv1_CHANGE_SOURCE_ANALOG_INPUT 0
#define __S2_NEC_MultiSync_BYUv1_CHANGE_VOLUME_LEVEL_ANALOG_INPUT 1
#define __S2_NEC_MultiSync_BYUv1_CHANGE_TV_CHANNEL_ANALOG_INPUT 2
#define __S2_NEC_MultiSync_BYUv1_CHANGE_ANALOG_CLOSED_CAPTION_ANALOG_INPUT 3
#define __S2_NEC_MultiSync_BYUv1_CHANGE_DIGITAL_CLOSED_CAPTION_ANALOG_INPUT 4


#define __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_INPUT 5
#define __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_MAX_LEN 500
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FROMDEVICE, __S2_NEC_MultiSync_BYUv1_FROMDEVICE_BUFFER_MAX_LEN );


/*
* DIGITAL_OUTPUT
*/
#define __S2_NEC_MultiSync_BYUv1_POWER_IS_ON_DIG_OUTPUT 0
#define __S2_NEC_MultiSync_BYUv1_POWER_IS_OFF_DIG_OUTPUT 1
#define __S2_NEC_MultiSync_BYUv1_MUTE_IS_ON_DIG_OUTPUT 2
#define __S2_NEC_MultiSync_BYUv1_MUTE_IS_OFF_DIG_OUTPUT 3
#define __S2_NEC_MultiSync_BYUv1_CONTROL_BUTTON_IS_LOCKED_DIG_OUTPUT 4
#define __S2_NEC_MultiSync_BYUv1_CONTROL_BUTTON_IS_UNLOCKED_DIG_OUTPUT 5


/*
* ANALOG_OUTPUT
*/
#define __S2_NEC_MultiSync_BYUv1_VOLUME_ANALOG_ANALOG_OUTPUT 0
#define __S2_NEC_MultiSync_BYUv1_SELECTED_INPUT_ANALOG_ANALOG_OUTPUT 1
#define __S2_NEC_MultiSync_BYUv1_ANALOG_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT 2
#define __S2_NEC_MultiSync_BYUv1_DIGITAL_CLOSED_CAPTION_ANALOG_ANALOG_OUTPUT 3

#define __S2_NEC_MultiSync_BYUv1_SELECTED_CHANNEL_TEXT_STRING_OUTPUT 4
#define __S2_NEC_MultiSync_BYUv1_TODEVICE_STRING_OUTPUT 5
#define __S2_NEC_MultiSync_BYUv1_MESSAGE_STRING_OUTPUT 6


/*
* Direct Socket Variables
*/




/*
* INTEGER_PARAMETER
*/
#define __S2_NEC_MultiSync_BYUv1_MONITOR_ID_INTEGER_PARAMETER 10
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_NEC_MultiSync_BYUv1_RESPONSESTRING_STRING_MAX_LEN 3000
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING, __S2_NEC_MultiSync_BYUv1_RESPONSESTRING_STRING_MAX_LEN );
#define __S2_NEC_MultiSync_BYUv1_COMMANDSTRING_STRING_MAX_LEN 10000
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING, __S2_NEC_MultiSync_BYUv1_COMMANDSTRING_STRING_MAX_LEN );
#define __S2_NEC_MultiSync_BYUv1_COMMANDTOBESENT_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT, __S2_NEC_MultiSync_BYUv1_COMMANDTOBESENT_STRING_MAX_LEN );
#define __S2_NEC_MultiSync_BYUv1_RX_HEADER_STRING_MAX_LEN 7
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_HEADER, __S2_NEC_MultiSync_BYUv1_RX_HEADER_STRING_MAX_LEN );
#define __S2_NEC_MultiSync_BYUv1_RX_MESSAGE_STRING_MAX_LEN 50
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_MESSAGE, __S2_NEC_MultiSync_BYUv1_RX_MESSAGE_STRING_MAX_LEN );
#define __S2_NEC_MultiSync_BYUv1_RX_TRASH_STRING_MAX_LEN 100
CREATE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_TRASH, __S2_NEC_MultiSync_BYUv1_RX_TRASH_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_NEC_MultiSync_BYUv1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_IO_ARRAY( __NUMBERS );
   unsigned short __RXOK;
   unsigned short __SENDING;
   unsigned short __RX_MESSAGELENGTH;
   unsigned short __RX_MESSAGETYPE;
   unsigned short __RX_MARKER1;
   unsigned short __RX_MARKER2;
   unsigned short __RX_MARKER3;
   unsigned short __CURRENTTVCHANNEL;
   unsigned short ___VOLUME;
   unsigned short ___MUTED;
   unsigned short ___VOLUMEBEFOREMUTED;
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RESPONSESTRING );
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDSTRING );
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __COMMANDTOBESENT );
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_HEADER );
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_MESSAGE );
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __RX_TRASH );
   DECLARE_STRING_STRUCT( S2_NEC_MultiSync_BYUv1, __FROMDEVICE );
};

START_NVRAM_VAR_STRUCT( S2_NEC_MultiSync_BYUv1 )
{
};

DEFINE_WAITEVENT( S2_NEC_MultiSync_BYUv1, SENDWAIT );


#endif //__S2_NEC_MULTISYNC_BYUV1_H__
