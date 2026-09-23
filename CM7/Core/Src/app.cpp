/**
 * Kuma Flight System Project
 *
 * @file app.cpp
 * @brief Application Management
 *
 * @author Teddy Marie Inez
 * @date 2026-09-21
 */

#include <app.hpp>
#include "heartbeat_task.hpp"
#include "logger.hpp"

void App_Start(void)
{
    Logger::Print("\r\n");
    Logger::Print("[BOOT] KumaFlightSystem v0.1.0\r\n");

    HeartbeatTask::Start();

    Logger::Print("[BOOT] Tasks created\r\n");
}
