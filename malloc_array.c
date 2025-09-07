#include <stdio.h>
#include <stdlib.h>

int main() {
    // Read the number of elements
    int n;
    scanf("%d", &n);
    
    // TODO: Write your code below
    // 1. Allocate memory for n double values using malloc() and sizeof()
    double *arr = (double*)malloc(n*sizeof(double));
    // 2. Cast the returned pointer to double*
    // 3. Read n double values and store them in the allocated array
    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
    }
    // 4. Calculate and print memory allocated in bytes
    int bytes = n*sizeof(double);
    printf("Memory allocated: %d bytes\n",bytes);
    // 5. Calculate and print the average with 2 decimal places
    double sum = 0;
    for (int i = 0;i<n;i++){
        sum += arr[i];
    }
    double average = sum/n;
    printf("Average: %.2f\n",average);
    // 6. Find and print the largest value with 2 decimal places
    double largest = arr[0];
    for(int i= 0;i<n;i++){
        if (arr[i]>=largest){
            largest = arr[i];
        }
    }
    printf("Largest: %.2f\n",largest);

    
    return 0;
}
