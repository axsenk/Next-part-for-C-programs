#include <stdio.h>

// TODO: Create the analyzeTemperatures function here
void analyzeTemperatures(int *arr,int len){
    int sum = 0;
    int high = 0;
    int abv = 0;
    float nel = len;
    for (int i = 0;i<nel;i++){
        sum += *(arr+i);
        if (*(arr+i) >= high){
            high = *(arr+i);
        }
        if (*(arr+i) > 25){
            abv++;
        }
    }
    float avr = sum/nel;
    printf("Average temperature: %.1f\n",avr);
    printf("Highest temperature: %d\n",high);
    printf("Days above 25 degrees: %d\n",abv);
}

int main() {
    // Read number of temperature readings
    int n;
    scanf("%d", &n);
    
    // Declare array to store temperatures
    int temperatures[n];
    
    // Read temperature values
    for (int i = 0; i < n; i++) {
        scanf("%d", &temperatures[i]);
    }
    
    // TODO: Call the analyzeTemperatures function here
    analyzeTemperatures(temperatures,n);

    
    return 0;
}
