#include <stdio.h>
#include <string.h>


void letterprinter(char* word);


int main(){
    char word[100];
    letterprinter(word);
    return 0;
}

void letterprinter(char* word){
    printf("enter something and I will print every letter\n");
    scanf("%s",word);
    for (int i = 0; i < strlen(word); i++){
        printf("number: %d character %c\n",i,word[i]);
    }
}