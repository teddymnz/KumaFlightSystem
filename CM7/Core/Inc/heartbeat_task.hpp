/**
 * Kuma Flight System Project
 *
 * @file heartbeat_task.cpp
 * @brief Heartbeat task header
 *
 * @author Teddy Marie Inez
 * @date 2026-09-21
 */


#pragma once

class HeartbeatTask
{
public:
    static void Start();

private:
    static void Run(void *argument);
};
