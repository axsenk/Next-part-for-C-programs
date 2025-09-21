#include <stdio.h>
#include <string.h>

// TODO: Define the Student struct here
struct Student {
    int id;
    float grade;
};

int main() {
    // TODO: Create a Student variable named student1
    struct Student student1;
    
    // Read input
    int id;
    float grade;
    scanf("%d", &id);
    scanf("%f", &grade);
    
    // TODO: Store the input values in the struct members
    student1.id = id;
    student1.grade = grade;
    
    // TODO: Implement grade validation and bonus calculation
    if (student1.grade > 100.0){
        student1.grade = 100.0;
    }
    else if (student1.grade < 0.0){
        student1.grade = 0.0;
    }
    float bonus_grade = student1.grade + 5.0;
    if (bonus_grade > 100.0){
        bonus_grade = 100.0;
    } 

    
    // TODO: Determine grade status
    char status[30];
    int grad = student1.grade/10;
    switch (grad){
    case 10:
    strcpy(status,"Excellent");
    break;
    case 9:
    strcpy(status,"Excellent");
    break;
    case 8:
    strcpy(status,"Good");
    break;
    case 7:
    strcpy(status,"Average");
    break;
    default:
    strcpy(status,"Needs Improvement");
    }
    
    // Output the results
    printf("Student Information:\n");
    printf("ID: %d\n",student1.id /* TODO: print student ID */);
    printf("Original Grade: %.1f\n",student1.grade /* TODO: print original grade */);
    printf("Bonus Grade: %.1f\n",bonus_grade /* TODO: print bonus grade */);
    printf("Grade Status: %s\n",status /* TODO: print grade status */);
    
    return 0;
}
