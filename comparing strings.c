#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    
    char username[100];
    char password[100];
    int successful_logins = 0;
    
    // TODO: Write your code here
    // Process each login attempt using strcmp() function
    for (int i=0;i<n;i++){
    scanf("%s",username);
    scanf("%s",password);
    
    // Compare username with "admin" and password with "secret123"
    int use = strcmp("admin",username);
    int pass= strcmp("secret123",password);
    if(use==0 && pass ==0){
        printf("Login successful\n");
        successful_logins += 1;
    }
    else if(use ==0 && pass != 0){
        printf("Invalid password\n");
    }
    else if(use!=0 && pass==0){
        printf("Invalid username\n");
    }
    else{
        printf("Invalid credentials\n");
    }
    }
    // Print appropriate messages and count successful logins
    
    printf("Total successful logins: %d\n", successful_logins);
    
    return 0;
}
