//
// Created by zachpuls on 5/30/2016.
//

#ifndef MINECRAFT_LOGGING_H
#define MINECRAFT_LOGGING_H

#include "datetime.h"

#define LOG(level, msg) printf_s("[%s] %s: %s\n", level, get_current_datetime(), msg)

#define LOG_INFO(msg) LOG("INFO", msg)
#define LOG_ERROR(msg) LOG("ERROR", msg)

#ifndef NDEBUG
    #define LOG_DEBUG(msg) LOG("DEBUG", msg)
#else
    #define DEBUG(msg)
#endif //NDEBUG

#endif //MINECRAFT_LOGGING_H
