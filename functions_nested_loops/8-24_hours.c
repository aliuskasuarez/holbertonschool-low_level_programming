#include "main.h"
#include <unistd.h>
void jack_bauer(void)
{
int hour, minute;
char time_str[6];
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
time_str[0] = '0' + (hour / 10);
time_str[1] = '0' + (hour % 10);
time_str[2] = ':';
time_str[3] = '0' + (minute / 10);
time_str[4] = '0' + (minute % 10);
time_str[5] = '\n';
write(1, time_str, 6);
}
}
}
