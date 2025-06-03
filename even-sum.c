#include <stdio.h>

int main() {
    int count;
    long int num1 , num2, sum = 0;
    printf("enter the first number");
    scanf("%ld",&num1);
    printf("enter the second number");
    scanf("%ld",&num2);
    for (count = num1 ; count <= num2; count ++){
        if (count %2 == 0) {
            sum += count;
        }
    }
    printf("sum of evens in between those numbers is %ld",sum);
    getchar();
    getchar();
    return 0;
}