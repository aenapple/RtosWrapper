/**********************************************************************************/
/**
*  @file
*  Os.hpp - declaration of the class TOs.
*
*/
/**********************************************************************************/
#ifndef __Os_H
#define __Os_H

/**********************************************************************************/
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "event_groups.h"
#include "timers.h"
#include "semphr.h"
#include "stream_buffer.h"
//#include "cmsis_os.h"
//#include "mpu_wrappers.h"

/**********************************************************************************/
/// For 32-bits system ///
typedef unsigned long u64;
typedef signed long s64;
typedef unsigned int u32;
typedef signed int u32;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned char u8;
typedef signed char u8;

/// 
enum
{
	OsResult_Ok,
	OsResult_Timeout,

	OsResult_ErrorCreateResource,
	OsResult_ResourceBusy,
	OsResult_QueueEmpty,
	OsResult_WrongParameter

} EOsResult;

/**********************************************************************************/
//==================================================================================
class TOs
{
public:
	/// variables ///

	/// constants ///

	/// functions ///
	static void Delay(u64);
	static u32 GetTimeStamp(void);
	static bool IsTimeExpired(u32);


protected:
	/// variables ///

	/// constants ///

	/// functions ///
	

private:
	/// variables ///

	/// constants ///

	/// functions ///


};
//=== end class TOs ================================================================

/**********************************************************************************/
#endif
