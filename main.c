//
// Created by tuuli on 02/02/2026.
//
#include <stdio.h>
#include <stdbool.h>

#include "Week_1/Week1_T1.h"
#include "Week_1/Week1_T2.h"
#include "Week_1/Week1_T3.h"
#include "Week_2/Week2_T4.h"
#include "Week_2/Week2_T5.h"
#include "Week_2/Week2_T6.h"
#include "C:/Users/tuuli/CLionProjects/My_C_header/My_C_header.h"

#define TOTAL_TASKS 6


int main(){
    bool tof = true;

    while (tof){
        printf("\n\nWe are in main program. Which task would you like to run? (1-%d) or 0 to quit.\n", TOTAL_TASKS);
        int task_number = read_range(0, TOTAL_TASKS);

        switch (task_number){
            case 0:
                printf("Quitting the main program, bye bye!\n");
                tof = false;
                break;

            case 1:
    #if defined(T1_DONE)
                printf("\nRunning Task 1:\n");
                main_T1();
                break;
    #endif

            case 2:
    #if defined(T2_DONE)
                printf("\nRunning Task 2:\n");
                main_T2();
                break;
    #endif

            case 3:
    #if defined(T3_DONE)
                printf("\nRunning Task 3:\n");
                main_T3();
                break;
    #endif

            case 4:
    #if defined(T4_DONE)
                printf("\nRunning Task 4:\n");
                main_T4();
                break;
    #endif

            case 5:
    #if defined(T5_DONE)
                printf("\nRunning Task 5:\n");
                main_T5();
                break;
    #endif

            case 6:
    #if defined(T6_DONE)
                printf("\nRunning Task 6:\n");
                main_T6();
                break;
    #endif

            default:
                printf("Invalid task number or disabled unfinished exercise.\n");
                break;
            }
    }

    return 0;
}
