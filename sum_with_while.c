#include <stdio.h>

int main() {
    int i, j = 0, sum = 0;
    printf("enter a number so I can sum: \n");
    scanf("%d",&i);
    while (j <= i) {
        sum += j;
        j++;
    }
    printf("the sum is:  %d", sum);
    return 0;
}