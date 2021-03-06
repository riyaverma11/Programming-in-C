// Your first task is to write a function createStudent() that takes as inputs a 
// string (namely a student's name) and an integer (their age) and that returns a 
// pointer to a struct student which stores this information. Your function should 
// dynamically allocate the memory required for this struct student and then write 
// the student's name and age into this newly allocated memory. 
#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

//function prototypes
struct student *createStudent(char studentName[], int studentAge);
void freeSpace(struct student * start);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student *createStudent(char studentName[], int studentAge) {
    int i;
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    for(i=0; i<50; i++) {
        ptr->name[i] = studentName[i];
    }
    //ptr->name = studentName; //did not work, got error saying studentName is unassignable
    ptr->age = studentAge;
    ptr->next = NULL;
    return(ptr);
}

void freeSpace(struct student * start) {
    struct student * pointer = start;
    while (pointer != NULL) {
        start = pointer;
        pointer = pointer->next;
        free(start);
    }
}
