/**
 * Kuma Flight System Project
 *
 * @file logger.hpp
 * @brief Logger module header
 *
 * @author Teddy Marie Inez
 * @date 2026-09-22
 */

#pragma once

class Logger
{
public:
    static void Init();
    static void Print(const char* msg);
};
