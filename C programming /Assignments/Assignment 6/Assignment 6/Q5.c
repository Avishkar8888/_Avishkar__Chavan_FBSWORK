#include <stdio.h>
int isArmstrong(int num);

void  main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is Not an Armstrong number.\n", number);


}

int isArmstrong(int num) {
    int original = num;
    int sum = 0, digit;

    while (num > 0) {
        digit = num % 10;
        sum =sum+ digit * digit * digit; 
        num =num/10;
    }

    return (sum == original);
}
