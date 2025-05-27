#include <stdio.h>

int main() {
    int month;
    printf("tell me the month number and I will tell which season is it.\n");
    scanf("%d",&month);
    switch(month) {
        case 1: 
            printf("it is winter.\n");
            break;
        case 2:
            printf("it is winter.\n");
            break;
        case 3:
            printf("it is spring.\n");
            break;
        case 4:
            printf("it is spring.\n");
            break;
        case 5:
            printf("it is spring.\n");
            break; 
        case 6:
            printf("it is summer.\n");
            break;
        case 7:
            printf("it is summer.\n");
            break;
        case 8:
            printf("it is summer.\n");
            break;
        case 9:
            printf("it is fall.\n");
            break;
        case 10:
            printf("it is fall.\n");
            break; 
        case 11:
            printf("it is fall.\n");
            break; 
        case 12:
            printf("it is winter.\n");
            break;
        default:
            printf("it is invalid number.");
            break;              
        }
        getchar();
        getchar();
        return 0;
    }