#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of elements
    int n;
    scanf("%d", &n);
    
    // TODO: Write your code below
    // 1. Allocate memory for n integers using malloc()
    int *arr = (int*)malloc(n*sizeof(int));
    // 2. Check if allocation was successful
    if (arr == NULL){
        printf("Memory allocation failed!\n");
        return -1;
    }
    else{
        printf("Array of size %d created successfully!\n",n);
    }
    // 3. Read n integers into the array
    for (int i = 0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    // 4. Calculate sum, find minimum, count elements above average
    int sum = 0;
    int min = arr[0];
    int count  = 0;
    for (int i = 0;i<n;i++){
       sum += arr[i];
       if (arr[i] <= min){
        min = arr[i];
       }
    }
    printf("Sum: %d\n",sum);
    printf("Minimum: %d\n",min);
    float average = sum/n;
    for (int i = 0;i<n;i++){
       if (arr[i] > average){
        count++;
       }
    }
    printf("Elements above average: %d\n",count);
    // 5. Print results and free memory
    int bytes = (n*sizeof(int));
    printf("Memory used: %d bytes\n",bytes);
    free(arr);
    printf("Memory successfully freed!");
    
    return 0;
}
