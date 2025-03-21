/* --- Logger.cpp --- */

/* ------------------------------------------
author: undefined
date: 3/21/2025
------------------------------------------ */

#include "Logger.h"

void Logger::info(const std::string &message)
{
    std::cout << "[INFO]: " << message << std::endl;
}

void Logger::warning(const std::string &message)
{
    std::cout << "[WARNING]: " << message << std::endl;
}

void Logger::error(const std::string &message)
{
    std::cout << "[ERROR]: " << message << std::endl;
}