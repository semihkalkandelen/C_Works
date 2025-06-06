#include <stdio.h>

float ortalama(int sayi1, int sayi2);

int main(){
    float sonuc = ortalama(5,3);
    printf("sayilrin ortalamasi %.2f", sonuc);
    return 0;
}

float ortalama(int sayi1, int sayi2) {
    float toplam = (sayi1 + sayi2)/2;
    return toplam;
}