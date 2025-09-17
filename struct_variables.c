#include <stdio.h>

int main() {
    // TODO: Define your struct Rectangle here
    struct Rectangle {
        int width;
        int height;
    };
    
    // TODO: Define your struct Student here
    struct Student {
        int id;
        char name[30];
        float gpa;
    };
    
    // TODO: Create the struct variables here
    struct Rectangle rect1,rect2;
    struct Student student1,student2,student3;
    
    // TODO: Print confirmation messages for each variable created
    printf("Rectangle variable rect1 created\n");
    printf("Rectangle variable rect2 created\n");
    printf("Student variable student1 created\n");
    printf("Student variable student2 created\n");
    printf("Student variable student3 created\n");
    // TODO: Print total number of struct variables created
    printf("Total struct variables created: 5\n");
    // TODO: Print memory usage for each struct type using sizeof()
    printf("Memory per Rectangle: %lu bytes\n",sizeof(struct Rectangle));
    printf("Memory per Student: %lu bytes\n",sizeof(struct Student));
    return 0;
}
