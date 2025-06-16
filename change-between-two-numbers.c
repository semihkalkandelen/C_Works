#include <stdio.h>

void difference(float *firstnum, float *secondnum, float *result, float *change);


int main(){
    float sayi1, sayi2, result, change;
    printf("enter the first num\n");
    scanf("%f",&sayi1);
    printf("enter the second num\n");
    scanf("%f",&sayi2);
    difference(&sayi1,&sayi2,&result,&change);
    printf("the difference beeen %.2f and %.2f is %.2f . and second num is more than first num %.2f percentage!",sayi1, sayi2, result, change); //hem result hem change değişkenini tek void kullanarak döndürebilir miyim?
}


void difference(float *firstnum, float *secondnum, float *result, float *change){
    *result = *secondnum - *firstnum;
    if (*firstnum == 0){
        printf("first number is zero and I cannot calculate chane");
        *change = 0;
    }
    else {
        *change = (*secondnum / *firstnum)*100;
    }

} 



