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
#include "Week_3/Week3_T7.h"
#include "Week_3/Week3_T8.h"
#include "Week_3/Week3_T9.h"
#include "Week_4/Week4_T10.h"
#include "C:/Users/tuuli/CLionProjects/My_C_header/My_C_header.h"

#define TOTAL_TASKS 10


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

    #if T1_DONE
            case 1:
                printf("\nRunning Task 1:\n");
                main_T1();
                break;
    #endif

    #if defined(T2_DONE)
            case 2:
                printf("\nRunning Task 2:\n");
                main_T2();
                break;
    #endif

    #if defined(T3_DONE)
            case 3:
                printf("\nRunning Task 3:\n");
                main_T3();
                break;
    #endif

    #if defined(T4_DONE)
            case 4:
                printf("\nRunning Task 4:\n");
                main_T4();
                break;
    #endif

    #if defined(T5_DONE)
            case 5:
                printf("\nRunning Task 5:\n");
                main_T5();
                break;
    #endif

    #if defined(T6_DONE)
            case 6:
                printf("\nRunning Task 6:\n");
                main_T6();
                break;
    #endif

    #if defined(T7_DONE)
            case 7:
                printf("\nRunning Task 7:\n");
                main_T7();
                break;
    #endif

    #if defined(T8_DONE)
            case 8:

                printf("\nRunning Task 8:\n");
                main_T8();
                break;
    #endif

    #if defined(T9_DONE)
            case 9:
                printf("\nRunning Task 9:\n");
                main_T9();
                break;
    #endif

#if T10_DONE
            case 10:
                printf("\nRunning Task 10:\n");
                main_T10();
                break;
#endif

            default:
                printf("Invalid task number or disabled unfinished exercise.\n");
                break;
            }
    }

    return 0;
}
