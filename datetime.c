//
// Created by zachpuls on 5/30/2016.
//

#include <time.h>
#include <string.h>

#include "datetime.h"

char *get_current_datetime() {
    time_t timeRaw;
    struct tm *timeInfo;

    time(&timeRaw);
    timeInfo = localtime(&timeRaw);

    return strip_newline(asctime(timeInfo));
}

char *strip_newline(char *str) {
    char *pos = strchr(str, '\n'); // Finds first newline character
    if (pos != NULL) {
        *pos = '\0'; // Set character to NULL, terminating the string
    }
    return str;
}

