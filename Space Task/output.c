/*
          Group Name : >> Spase <<
1-Ahmed Mohamed El-Damshity
2-Ahmed Magdy El-Zayady
3-Hossam Adel
4-Mohamed Gomaa Elmorsy
5-Mohamed Tahoon

*/
#include <stdio.h>
#include "output.h"
#include "data.h"
#include "STD_TYPES.h"
void DisplayAllStudents() {
    if (numStudents > 0) {
        for (u32 i = 0; i < numStudents; i++) {
                 setColor(14);
            printf("Student ID: %d\n", i);
            printf("Name: %s\n", students[i].name);
            printf("Gender: %c\n", students[i].gender);
            printf("Age: %d\n", students[i].age);
            printf("Study Year: %d\n", students[i].studyYear);
             setColor(11);
            printf("----------------------\n");
        }
    } else {
        setColor(12);
        printf("No students available.\n");
    }
}
