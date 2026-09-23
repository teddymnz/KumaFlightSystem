/**
 * Kuma Flight System Project
 *
 * @file logger.cpp
 * @brief Logger module source
 *
 * @author Teddy Marie Inez
 * @date 2026-09-22
 */

#include "Logger.hpp"

extern "C" {
#include "main.h"
#include <string.h>
}

extern UART_HandleTypeDef huart3;

void Logger::Init()
{
}

void Logger::Print(const char* msg)
{
    HAL_UART_Transmit(
        &huart3,
        (uint8_t*)msg,
        strlen(msg),
        HAL_MAX_DELAY
    );
}
