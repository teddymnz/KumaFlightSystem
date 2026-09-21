/**
 * Kuma Flight System Project
 *
 * @file App.cpp
 * @brief Application Management
 *
 * @author Teddy Marie Inez
 * @date 2026-09-21
 */

#include "App.hpp"

#include "heartbeat_task.hpp"

void App_Start(void)
{
    HeartbeatTask::Start();
}
