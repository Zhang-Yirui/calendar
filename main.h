#ifndef C_CALENDAR_MAIN_H
#define C_CALENDAR_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "calendar.h"

#define VERSION "v1.0.1"
#define REPOSITORY_URL "https://github.com/Zhang-Yirui/calendar"

void help_en();

void help_ch();

char *getVersion();

int checkBit(int num, int n);

char *toData(int year, int month, int day);

char *toJson(int year, int month, int day);

char *toString(int year, int month, int day);

void getTodayDate();

int getDateFromInput(char *date_str);

#endif //C_CALENDAR_MAIN_H
