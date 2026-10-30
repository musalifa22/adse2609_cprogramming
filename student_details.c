#include <stdio.h>

int main()
{
    // Variable(s) to be used in the program
    int age;       // holds the student's age
    float average; // holds the student's average mark
    char grade;    // holds the student's grade

    // Assign values to the variables
    age = 18;
    average = 75.5;
    grade = 'A';

    // Display the student's details
    printf("\n==================================");
    printf("\nSTUDENT DETAILS");
    printf("\n==================================");
    printf("\nStudent Age: %d", age);
    printf("\nAverage Mark: %.2f", average);
    printf("\nStudent Grade: %c", grade);
    printf("\n==================================");

    return 0;
}
