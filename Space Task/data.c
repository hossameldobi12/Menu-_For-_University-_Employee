/*
          Group Name : >> Spase <<
1-Ahmed Mohamed El-Damshity
2-Ahmed Magdy El-Zayady
3-Hossam Adel
4-Mohamed Gomaa Elmorsy
5-Mohamed Tahoon

*/
#include <stdio.h>
#include "data.h"
#include "STD_TYPES.h"

void InitStudents()
{
    FILE* file = fopen("students.txt", "r");
    if (file != NULL)
        {
        char line[MAX_LINE_LENGTH];
        while (fgets(line, sizeof(line), file) != NULL) {
            sscanf(line, "%[^,],%c,%d,%d", students[numStudents].name, &students[numStudents].gender,
                    &students[numStudents].age, &students[numStudents].studyYear);
            numStudents++;
        }
        fclose(file);
    }
}

void FileWrite()
{
    FILE* file = fopen("students.txt", "w");
    if (file != NULL)
        {
        for (u32 i = 0; i < numStudents; i++)
        {
            fprintf(file, "%s,%c,%d,%d\n", students[i].name, students[i].gender, students[i].age, students[i].studyYear);
        }
        fclose(file);
    }
}

void DeleteStudent() {
    u32 studentId;
     setColor(11);
    printf("Enter the student ID to delete: ");
     setColor(7);
    scanf("%d", &studentId);

    if (studentId >= 0 && studentId < numStudents) {
        for (u32 i = studentId; i < numStudents - 1; i++) {
            students[i] = students[i + 1];
        }
        numStudents--;
        FileWrite();
         setColor(2);
        printf("Student deleted successfully!\n");
    } else {
         setColor(12);
        printf("Invalid student ID.\n");
    }
}
