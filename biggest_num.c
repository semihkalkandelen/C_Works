//Use the ternary operator to find the smallest of three numbers.

#include <stdio.h>

void numbers(int *a, int *b, int *c){
    printf("enter the first number:\n");
    scanf("%d",a);
    printf("enter the second number:\n");
    scanf("%d",b);
    printf("enter the third number:\n");
    scanf("%d",c);
}

int findbiggest(int a, int b, int c){
    if (a>=b && a>=c) return a;
    else if (b>=a && b>=c) return b;
    else return c;
}


int main(){
    int x,y,z;
    numbers(&x,&y,&z);
    int max = findbiggest(x,y,z);
    printf("biggest number is %d",max);
    getchar();
    getchar();
    return 0;
}
