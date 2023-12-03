/*
          Group Name : >> Spase <<
1-Ahmed Mohamed El-Damshity
2-Ahmed Magdy El-Zayady
3-Hossam Adel
4-Mohamed Gomaa Elmorsy
5-Mohamed Tahoon

*/
#ifndef DATA_H
#define DATA_H

#define MAX_STUDENTS 100
#define MAX_StudyYear 5
#define MAX_StudentsAge 30
#define MAX_LINE_LENGTH 256

#include"STD_TYPES.h"


typedef struct {
    u8 name[50];
    u8 gender;
    u32 age;
    u32 studyYear;
} Student;

 Student students[MAX_STUDENTS];
 u32 numStudents;

void InitStudents();
void FileWrite();
void DeleteStudent();

#endif /* DATA_H */
