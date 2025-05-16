#include <stdio.h>

int main(){
    char chr;
    double num1, num2, result;
    printf("use one of those chars:\n +, -, /, *\n");
    scanf("%c",&chr);
    if (chr != '+' && chr != '/' && chr != '*' && chr != '-') {
        printf("you entered an invalid character");
        return 0;
    }
    else {
        printf("enter num 1: \n");
        scanf("%lf",&num1);
        printf("enter num 2: \n");
        scanf("%lf",&num2);
        if (chr == '*'){
            result = num1 * num2;
        }
        else if (chr == '-'){
            result = num1 - num2;
        }
        else if (chr == '+'){
            result = num1 + num2;
        }
        else if (chr == '/'){
            result = num1 / num2;
        }
        printf("the result is: %.2lf", result);
    }
    getchar();
    getchar();
    return 0;
}