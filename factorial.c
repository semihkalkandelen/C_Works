#include <stdio.h>

int main() {
    int num, count;
    long int total = 1;
    printf("enter a number for take a factorial: \n");
    scanf("%d",&num);
    if (num == 0){
        printf("factorial of 0 is 1");
    }
    else if (num < 0){
        printf("invalid number!");
    }
    else {
        for (count = 1; count <= num; count++){
        total *= count;
        
    }
    printf("factorial of %d is %ld", num, total);
    }

    return 0;
}