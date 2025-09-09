#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of integers
    int n;
    scanf("%d", &n);
    
    // TODO: Write your code here
    // - Use malloc() to allocate memory for n integers
    int *arr= (int*)malloc(n*sizeof(int));
    // - Check if allocation was successful
    if (arr == NULL){
        printf("Memory allocation failed!\n");
        return 0;
    }
    else {
        printf("Memory allocation successful!\n");
    }
    // - Handle both success and failure cases
    // - Read the integers and store them
    int sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    printf("Sum: %d\n",sum);
    // - Calculate the sum and bytes allocated
    int bytes = n*sizeof(int);
    printf("Bytes allocated: %d\n",bytes);

    
    return 0;
}
