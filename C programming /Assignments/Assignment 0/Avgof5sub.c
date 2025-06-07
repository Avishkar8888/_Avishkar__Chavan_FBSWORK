#include <stdio.h>

void  main() {
    float subject1=10, subject2=20, subject3=30, subject4=40, subject5=50;
    float total, percentage;
    total = subject1 + subject2 + subject3 + subject4 + subject5;
    percentage = (total / 500) * 100; 
	printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

  
}
