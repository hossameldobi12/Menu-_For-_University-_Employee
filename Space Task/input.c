/*
          Group Name : >> Spase <<
1-Ahmed Mohamed El-Damshity
2-Ahmed Magdy El-Zayady
3-Hossam Adel
4-Mohamed Gomaa Elmorsy
5-Mohamed Tahoon

*/
#include <stdio.h>
#include "input.h"
#include "data.h"
#include <string.h>

void AddNewStudent()
{
     setColor(13);
    printf("Enter student details:\n");
     setColor(11);
    printf("Full Name: ");
     setColor(7);
    getchar();
    fgets(students[numStudents].name, sizeof(students[numStudents].name), stdin);
    students[numStudents].name[strcspn(students[numStudents].name, "\n")] = '\0';
     setColor(11);
    printf("Gender (m/f): ");
     setColor(7);
    scanf("%c", &students[numStudents].gender);
     setColor(11);
    printf("Age: ");
     setColor(7);
    scanf("%d", &students[numStudents].age);
    if (MAX_StudentsAge<students[numStudents].age)
    {
         setColor(12);
        printf("the student age greater than 30\n");
        return 0;
    }
     setColor(11);
    printf("Study Year: ");
xx:
     setColor(7);
    scanf("%d", &students[numStudents].studyYear);
    if (MAX_StudyYear<students[numStudents].studyYear)
    {
         setColor(12);
        printf("the Study Year greater than 5\n");
         setColor(11);
        printf("Enter New Study Year: ");
        goto xx;
    }
    if (numStudents < MAX_STUDENTS)
    {
        numStudents++;
        FileWrite();
         setColor(2);
        printf("Student added successfully!\n");
    }
    else
    {
         setColor(12);
        printf("Maximum number of students reached.\n");
    }
}
