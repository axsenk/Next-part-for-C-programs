#include <stdio.h>
#include <stdlib.h>

int main() {
    int count;
    
    // Read the number of integers to store
    scanf("%d", &count);
    
    // TODO: Write your code below
    // 1. Allocate memory using malloc() with sizeof()
    int *arr = (int*)malloc(count * sizeof(int));
    // 2. Check if allocation was successful
    if (arr == NULL){
        printf("Memory allocation failed!\n");
    }
    else{
        printf("Memory allocated successfully!\n"); 
    }
    // 3. Read the integer values and store them
    
    for (int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    // 4. Calculate sum and find maximum
    int sum = 0;
    int high = arr[0];
    for (int i=0;i<count;i++){
        sum += arr[i];
        if (arr[i]>=high){
            high = arr[i];
        }
    }
    printf("Sum: %d\n",sum);
    printf("Maximum: %d\n",high);
    // 5. Free the allocated memory
    free(arr);
    printf("Memory freed successfully!\n");
    
    return 0;
}
