#include <stdio.h>

void takaset(int *num1, int *num2);

int main(){
    int sayi1 = 5;
    int sayi2 = 10;
    int *psayi1 = &sayi1;
    int *psayi2 = &sayi2;
    printf("before exchange: sayi1: %d sayi2: %d\n",sayi1,sayi2);
    takaset(psayi1,psayi2);
    printf("new numbers are sayi1: %d sayi2: %d",sayi1,sayi2);
    return 0;
}

void takaset(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}