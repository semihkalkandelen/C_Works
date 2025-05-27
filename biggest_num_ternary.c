#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter first num\n");
    scanf("%d",&a);
    printf("enter second num\n");
    scanf("%d",&b);
    printf("enter third num\n");
    scanf("%d",&c);

    int result = (a> b && a > c) ?  a:
    (b>a && b>c) ? b:
    c;

    printf("biggest number is %d \n", result);
    return 0;
}