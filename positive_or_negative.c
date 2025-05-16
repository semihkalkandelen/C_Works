#include <stdio.h>

int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num == 0) {
        printf("your number 0.");
    }
    else if (num > 0){
        printf("your number is positive.");
    }
    else {
        printf("your number is negative.");
    }
    getchar();
    getchar();
    return 0;
}