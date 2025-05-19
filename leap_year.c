// Write a program to determine if a year is a leap year using nested if-else.

#include <stdio.h>

int main() {
    int year;
    printf("enter the year:");
    scanf("%d", &year);
    if (year % 4 == 0) {
        printf("this is a leap year.");
        getchar();
        getchar();
    }
    else {
        printf("this is not a leap year.");
        getchar();
        getchar();
    }
    return 0;
}