/**
 * Kuma Flight System Project
 *
 * @file heartbeat_task.cpp
 * @brief Heartbeat task source code
 *
 * @author Teddy Marie Inez
 * @date 2026-09-21
 */

#include "heartbeat_task.hpp"
#include "logger.hpp"


extern "C" {
	#include "cmsis_os2.h"
	#include "main.h"
}

static const osThreadAttr_t heartbeatTask_attributes = {
	.name = "Heartbeat",
	.stack_size = 256 * 4,
	.priority = osPriorityLow,
};

void HeartbeatTask::Start()
{
	osThreadNew(Run, nullptr, &heartbeatTask_attributes);
}

void HeartbeatTask::Run(void *argument)
{
	while (true)
	{
		Logger::Print(".");

		osDelay(1000);
	}
}
