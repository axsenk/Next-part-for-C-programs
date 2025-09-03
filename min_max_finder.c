#include <stdio.h>

// TODO: Write your findMinMax function here
void findMinMax(int *arr,int size,int *min,int *max){
    *min = *arr;
    *max = *arr;
    for (int i =0;i<size;i++){
        if(*(arr+i)<=*min){
            *min = *(arr+i);
        }
        if(*(arr+i)>=*max){
            *max = *(arr+i);
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minValue, maxValue;
    
    // TODO: Call the findMinMax function here
    findMinMax(arr,n,&minValue,&maxValue);
    printf("Minimum: %d\n", minValue);
    printf("Maximum: %d\n", maxValue);
    
    return 0;
}
