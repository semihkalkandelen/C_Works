#include <stdio.h>

float smallest(float a, float b, float c);

int main(){
    float answer = smallest(4.5,7,3);
    printf("smallest number is %.f",answer);
    return 0;
}

float smallest(float a, float b, float c) {
    float answer = (b < a && b < c)? b:
    (a < c) ? a : c;
    return answer; 
}