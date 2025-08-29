#include <stdio.h>
#include <string.h>

int main() {
    // TODO: Write your code here
    // 1. Print the prompt message
    printf("Enter a sentence: \n");
    // 2. Declare a character array named 'sentence' with 200 elements
    char sentence[200];
    // 3. Read input using scanf with %s format specifier
    scanf("%s",sentence);
    // 4. Print the entered word and its length
    printf("You entered: %s\n",sentence);
    int length = strlen(sentence);
    printf("Character count: %d\n",length);
    printf("Length: %d\n",length);
    int vowel = 0;
    for (int i=0;i<length;i++){
        if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' 
        || sentence[i]=='o' || sentence[i]=='u' ||
        sentence[i]=='A' || sentence[i]=='E' || sentence[i]=='I'
         || sentence[i]=='O' || sentence[i]=='U'){
            vowel++;
         }
    }
    printf("Vowel count: %d\n",vowel);
    return 0;
}
