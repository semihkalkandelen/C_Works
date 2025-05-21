//Simulate a vending machine that accepts coins (5, 10, 25 cents) using loops.

#include <stdio.h>

int main(){
    int a, sum = 0, count, step;
    printf("current storage: %d \n", sum);
    printf("how many coin will you throw in the machine?:\n");
    scanf("%d",&step);
    for (count = 0; count<step; count++) {
        printf("put the coins (5, 10 25  cents only): ");
        scanf("%d", &a);
        if (a == 5 || a == 10 || a == 25) {
            sum += a;
        }
        else {
            printf("this machine only accepts 5, 10, 25 cent. invalid number!\n");
        }
    }
    printf("the machine has %d coin in it.", sum);
    return 0;
}