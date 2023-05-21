#pragma once
#include<time.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

extern char* toLowerCase(char* str);
extern void setModifiedTime(time_t* str);
int main_menu();
void clear_screen();
int checkReminders();
