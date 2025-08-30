#include <stdio.h>

// TODO: Write your tryToModify function here
void tryToModify(int number){
    number += 50;
    printf("Inside function: %d\n",number);
}

int main() {
    // TODO: Write your code here
    // 1. Declare and initialize the original variable
    int original = 25;
    // 2. Print the value before function call
    printf("Before function call: %d\n",original);
    // 3. Call the tryToModify function
    tryToModify(original);
    // 4. Print the value after function call
    printf("After function call: %d\n",original);
    
    return 0;
}
