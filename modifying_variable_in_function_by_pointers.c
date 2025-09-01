#include <stdio.h>

// TODO: Write your tripleValue function here
void tripleValue(int *ptr){
    *ptr=*ptr*3;
    printf("Value tripled to: %d\n",*ptr);
}

int main() {
    // TODO: Write your code here
    // Declare and initialize the number variable
    int number = 8;
    // Print the original value
    printf("Original value: %d\n",number);
    // Call the tripleValue function
    tripleValue(&number);
    // Print the final value
    printf("Final value: %d\n",number);
    
    return 0;
}
