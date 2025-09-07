#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read input
    int input_value;
    scanf("%d", &input_value);
    
    // TODO: Write your code below
    // 1. Use malloc() to allocate memory for one integer
    int *ptr = (int*)malloc(sizeof(int));
    // 2. Cast the returned pointer to int*
    // 3. Store the input value in the allocated memory
    *ptr = input_value;
    // 4. Print the stored value
    printf("Stored value: %d\n",*ptr);
    // 5. Calculate and store the square in the same location
    *ptr = (*ptr) * (*ptr);
    // 6. Print the squared value
    printf("Squared value: %d\n",*ptr);
    
    return 0;
}
