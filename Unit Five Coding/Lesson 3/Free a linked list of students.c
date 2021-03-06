// Your current task is to write a function freeStudents() which takes as input a 
// pointer that holds the address of the start of a linked list of students. Your 
// function should then free the space allocated for each student in this list of students.
// Your function should not return anything.

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student * end, struct student * newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);

int main(void) {
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

   struct student *createStudent(char studentName[], int studentAge) {
    int i;
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    for(i=0; i<50; i++) {
        ptr->name[i] = studentName[i];
    }
    //ptr->name = studentName;
    ptr->age = studentAge;
    ptr->next = NULL;
    return(ptr);
}
struct student *append(struct student * end, struct student * newStudptr) {
    end->next = newStudptr;
    end = newStudptr;
    return(end);
}

void printStudents(struct student *start) {
    //format: [name] is [age] years old.
    struct student * pointer = start;
    while (pointer!=NULL) {
        printf("%s is %d years old.", pointer->name, pointer->age);
        pointer = pointer->next;
        printf("\n");
    }
}
void freeStudents(struct student *start) {
    struct student * freePointer = start;
    struct student * tempPointer;
    while (freePointer != NULL) {
        tempPointer = freePointer->next;
        free(freePointer);
        freePointer = tempPointer;
    }
}
