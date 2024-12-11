/*
You are given the details of t students in the following format.

The first line contains the count of students t

For each student, the following information is provided:- 
Student name
Student roll number
Student score in 3 subjects
The code template given in the IDE accepts student information - Name, Roll number and their test scores and then prints out the average score for each student. 
*/ 

#include <stdio.h>

// Define the structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks[3];
};

int main() {
    int numStudents;
    scanf("%d", &numStudents);

    // Declare an array of structures to store student information
    struct Student students[numStudents];

    // Input student details
    for (int i = 0; i < numStudents; i++) {
        scanf("%s", &students[i].name);
        scanf("%d", &students[i].rollNumber);
        for (int j = 0; j < 3; j++) {
            scanf("%f", &students[i].marks[j]);
        }
    }

    // Calculate and display student information
    for (int i = 0; i < numStudents; i++) {
        // Update the code below to calculate average marks
        float totalMarks = 0;
        for(int j = 0; j<3; j++){
            totalMarks += students[i].marks[j];
        }
        float averageMarks = totalMarks / 3.0;
        printf("%s ", students[i].name);
        printf("%.2f\n", averageMarks);
    }

    return 0;
}
