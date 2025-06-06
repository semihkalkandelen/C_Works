#include <stdio.h>
#include <stdbool.h>

bool even_or_odd(int number);

int main(){
    bool answer = even_or_odd(3);
    if (answer){
        printf("it is even");
    }
    else {
        printf("it is odd");
    }
    return 0;
}

bool even_or_odd(int number) {
    if (number%2 == 0) {
        return true;
    }
    else {
        return false;
    }
}