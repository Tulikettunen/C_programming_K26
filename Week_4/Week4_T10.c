//
// Created by tuuli on 12/02/2026.
//
/* Write a program that asks user to enter a string. Program must use fgets to read user input and
remove the linefeed at the end of the string. Then program prints the length of the string and checks
if the string is “stop”. If it is the program stops else program asks user to enter a new string (and
prints the length etc.).
*/


#include "Week4_T10.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include "My_C_header.h"

#if T10_DONE

#define MAX_STR_LEN 101

int main_T10(){
    printf("Welcome to the string length calculator program!\n");
    bool tof = true;

    while (tof){
        char user_input[MAX_STR_LEN];
        print_menu_T10();
        fgets_input(user_input, MAX_STR_LEN);
        str_len(user_input);
        //printf("You entered: %s\n", user_input);
        if (strcmp(user_input, "stop") == 0){
            tof = false;
            printf("Quitting the string length calculator program, bye bye!\n");
        }
        fflush(stdin);
    }

    return 0;
}


void print_menu_T10(){
    printf("Enter a string (max len %d), and I'll calculate the length of it, or enter 'stop', and the program will end.\n", MAX_STR_LEN - 1);
}


int str_len(char *string){
    int length = 0;
    for (int i = 0; string[i] != '\0'; i++){
        length = i+1;
    }
    printf("The length of the string is: %d\n", length);
    return length;
}

void fgets_input(char *string, int size){
    fgets(string, size, stdin);
    remove_linefeed(string);
}
#endif