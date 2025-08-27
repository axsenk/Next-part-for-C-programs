#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Read the number of people
    int n;
    scanf("%d", &n);
    
    // TODO: Write your code below
    // Process each person and create greeting messages
    for (int i = 0;i<n;i++){
    char first[100];
    scanf("%s",first);
    char last[100];
    scanf("%s",last);
    char fullName[100];
    strcpy(fullName,first);
    strcat(fullName," ");
    strcat(fullName,last);
    char greeting[150];
    strcpy(greeting,"Hello, ");
    strcat(greeting,fullName);
    strcat(greeting,"! Welcome to our program.");
    printf("%s\n",greeting);


    }
    char summary[100];
    strcpy(summary,"Total people processed: ");
    char sum[10];
    sprintf(sum,"%d",n);
    strcat(summary,sum);
    printf("%s",summary);
    // Then create and display the summary message
    
    return 0;
}
