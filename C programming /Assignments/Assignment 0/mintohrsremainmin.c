#include <stdio.h>

void  main() {
    int total_minutes = 135;  
    int hours, minutes;
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
    printf("%d minutes is equal to %d hour(s) and %d minute(s).\n", total_minutes, hours, minutes);

  
}
