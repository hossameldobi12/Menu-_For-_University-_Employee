/*
          Group Name : >> Spase <<
1-Ahmed Mohamed El-Damshity
2-Ahmed Magdy El-Zayady
3-Hossam Adel
4-Mohamed Gomaa Elmorsy
5-Mohamed Tahoon

*/

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "output.h"
#include "data.h"
#include "STD_TYPES.h"
#include <windows.h>
#include <string.h>

void setColor(u32 ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
    SetConsoleTextAttribute(hStdOut, wColor);
}
int main()
{   u8 ReturnHome=' ';
    u32 choice;
    InitStudents();
     setColor(3);
    u8 home[] =
        "     ===============================\n\
    |  University Management System  |\n\
     ===============================\n\
     ";

    do {
        for(u32 i=0; home[i]; i++)
        {
            printf("%c", home[i]);
        }
        printf("\n");
         setColor(15);
    printf("1- Add new student data.\n");
    printf("2- Delete existing student using student ID.\n");
    printf("3- Display all students.\n");
    printf("4- Exit program.\n");
     setColor(11);
        printf("Enter your choice: ");
        scanf("%d", &choice);
      system("cls");
        switch (choice) {
            case 1:
                AddNewStudent();
                 Sleep(2000);
            system("cls");
                break;
            case 2:

                DeleteStudent();
                 Sleep(2000);
            system("cls");
                break;
            case 3:

               DisplayAllStudents();
                printf("Press Any Key to Return Home ");
                 setColor(7);
                scanf(" %c",&ReturnHome);

                if (' '!=ReturnHome)
                {
                  system("cls");
                    break;
                }

            case 4:
                setColor(14);
            printf("\n     ");
            printf("> Author :> Space <");
            Sleep(2000);
            setColor(13);
            printf("\n\n            BYE BYE ^_^\n");
            Sleep(2000);
            setColor(7);

                break;
            default:
                 setColor(12);
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
