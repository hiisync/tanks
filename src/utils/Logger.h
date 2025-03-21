/* --- Logger.h --- */

/* ------------------------------------------
Author: undefined
Date: 3/21/2025
------------------------------------------ */

#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

class Logger
{
public:
    static void info(const std::string &message);
    static void warning(const std::string &message);
    static void error(const std::string &message);

private:
};

#endif // LOGGER_H
