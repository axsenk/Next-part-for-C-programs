#include <stdio.h>

// TODO: Write your swap function here
void swap(int *ptr1,int *ptr2){
   int temp = *ptr1;
   *ptr1 = *ptr2;
   *ptr2 = temp;
}

int main() {
    int a, b;
    
    // Read input
    scanf("%d", &a);
    scanf("%d", &b);
    
    // Print original values
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    // TODO: Call your swap function here
    swap(&a,&b);
    // Print swapped values
    printf("After swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
