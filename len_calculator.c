#include <stdio.h>


void lenght(char* word){
    printf("enter a letter and I will return its length\n");
    scanf("%s",word);
    int count = 0;
    while (word[count] != '\0'){
        count++;
    }
    printf("count is %d",count);
}

int main(){
    char word[100];
    lenght(word);
    return 0;
}