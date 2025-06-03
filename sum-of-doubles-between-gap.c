#include <stdio.h>
/*
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book mybook;
    printf("enter a book title");
    fgets(mybook.title, sizeof(mybook.title),stdin);
    printf("enter the author name");
    fgets(mybook.author, sizeof(mybook.author),stdin);
    printf("enter the price");
    scanf("%f", &mybook.price);
    printf("\n book information: \n");
    printf("title %s ", mybook.title);
    printf("author %s",mybook.author);
    printf("price %.2f",mybook.price);
    return 0;
} */
/*
#include <stdio.h>
#include <string.h>

typedef struct Student 
{
    int id;
    char name[50];
    float gpa;
} Student_t;

void displaystudent(Student_t s) {
    printf("displayin by value");
    printf("id %d", s.id);
    printf("name %s",s.name);
    printf("gpa %.2f",s.gpa);
    s.id = 999;
}

int main() {
    Student_t student1= { 101, "alice smith", 3.85};
    displaystudent(student1);
    printf("original student id after display %d \n",student1.id);
    return 0;
} */

/*
#include <stdlib.h>
#include <stdio.h>

int main(){
    int *arr,i;
    int n =5;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("memory allocation failed \n");
        return 1;
    }
    for (i = 0 ; i < n; i++) {
        arr[i] = i + 1;
    }
    for (i = 0; i < n; i ++) {
        printf("%d", arr[i]);
    }
    free(arr);
    return 0;
} */

#include <stdio.h>

struct Students
{
    char name[100];
    int studentID, gpa;
    struct Date;
};

struct Date {
    int day, month, year;
};

int main() {
    struct Students student;
    struct Date date;
    printf("enter the name");
    fgets(date.day);
    printf("enter the ID");
    fgets();
    printf("enter the GPA");
    fgets();
}




#include <stdio.h>

struct Book
{
    char name[100];
    int studentID, gpa;
    struct Date;
};


int main() {
    struct Students student;
    struct Date date;
    printf("enter the name");
    fgets(date.day);
    printf("enter the ID");
    fgets();
    printf("enter the GPA");
    fgets();
}