#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    
    // Read the size of the array
    scanf("%d", &size);
    
    // TODO: Write your code below
    // Use calloc() to allocate memory for the array
    int *arr = (int*)calloc(size,sizeof(int));
    // Check if allocation was successful
    if (arr == NULL){
        printf("Memory allocation failed!\n");
        return 0;
    }
    else{
        printf("Memory allocated and initialized to zero!\n");
    }
    // Print initial values (should be zero)

    printf("Initial values:");
    for (int i = 0;i<size;i++){
        printf(" %d",arr[i]);
    }
    printf("\n");
    // Read and store the input values
    int sum = 0;
    for (int i = 0;i<size;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    // Print updated values
    printf("Updated values:");
    for (int i = 0;i<size;i++){
        printf(" %d",arr[i]);
    }
    printf("\n");

    // Calculate and print the sum
    printf("Sum: %d\n",sum);
    // Free the allocated memory
    free(arr);
    printf("Memory freed!");
    
    return 0;
}
