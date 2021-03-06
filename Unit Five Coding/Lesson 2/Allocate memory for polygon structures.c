// initializePoly() should receive as input a pointer to the first structure in an
// array of structures as well as in integer, indicating how many points can be stored 
// in the array. Your job is to initialize these points in the following way: 
// Using a for loop with i starting at 0, initialize the x-coordinate of the point at index 
// i as -i, and the y-coordinate as i*i.

// Your main function should read the number of vertices to store in the array of 
// points from the user, then allocate the appropriate amount of memory, initialize 
// the array with the function initializePoly, and finally print the vertices of the
// polygon using the function printPoly().
#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    
    // Fill in your main function here
    struct point  * polygon; //assign a location in memory for polygon structure
    int numVertices; //user input
    
    scanf("%d", &numVertices);
    
    //assign the casted pointer to polygon pointer
    polygon = (struct point *) malloc(numVertices * sizeof(struct point));
    
    initializePoly(polygon, numVertices);
    printPoly(polygon, numVertices);
    
    free(polygon);
    return 0;

}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

// Write your initializePoly() function here
void initializePoly(struct point * ptr, int vertices) {
    int i;
    for (i=0; i<vertices; i++) {
        ptr[i].x = 0 - i;
        ptr[i].y = i*i;
    }
    // scanf("%d", &ptr->x);
    // scanf("%d", &ptr->y);
}
