#include <stdio.h>

int main() {
    char note;
    printf("enter your grade and I will encourage you:");
    scanf("%c",&note);
    switch(note) {
        case 'A':
            printf("you are doing great!\n");
            break;
        case 'B':
            printf("Try little harder!\n");
            break;
        case 'C':
            printf("gotta work more my friend\n");
            break;
        case 'D':
            printf("you may not pass the exam...\n");
            break;
        case 'E':
            printf("you are coooked!!!\n");
            break;
        default:
            printf("invalid note :(\n ");
            break;

    }
    getchar();
    getchar();
    return 0;
}