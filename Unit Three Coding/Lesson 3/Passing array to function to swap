#include <stdio.h>
// Within this program, we will pass an array with 6 integers to a function, have 
// the function swap the first and last integer, the second and the second to last 
// integer, the third and the third to last integer.

// The function is called reverseArray and doesn't return anything (void). It should 
// take one parameter, representing the array of integers. 

// The main function first reads 6 integers from the input, and assigns them to the 
// array. The main function then calls reverseArray, passing the array as an argument.

// The main function then prints the reversed array.

void reverseArray(int []);

int main(void) {
    int value;
    int array[6];
    int j;
    int k;
    
    for(j=0; j<6; j++) {
        scanf("%d", &value);
        array[j] = value;
    }
    
    reverseArray(array);
    for(k=0; k<6; k++) {
        printf("%d ", array[k]);
    }
    
    return 0;
}

void reverseArray(int ptr[]) {
    int temp;
    int i;
    for(i=0; i<3; i++) {
        temp = ptr[i];
        ptr[i] = ptr [5-i];
        //printf("%d : ", ptr[i]);
        ptr[5-i] = temp;
        //printf("%d\n", temp);
    }
}
