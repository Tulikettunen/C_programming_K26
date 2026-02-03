//
// Created by tuuli on 03/02/2026.
//

#include <stdio.h>
#include <stdbool.h>

#include "Week3_T7.h"

int main_T7(){
    int pos_no = 0;
    int *pos_point = &pos_no;
    int count = 0;
    bool truefalse = true;
    while (truefalse == true){
        printf("Guess how much money I have!\n");
        if(count == 3){
            truefalse = false;		//lopeta ohjelma
        }
        else if (read_positive(pos_point) == false){
            count += 1;     //menee tänne jos virhe syöte, ja laskee virhesyötteitä
        }
        else{
            arvauspeli(pos_no);
        }
    }

    printf("I give up! See you later!");
    return 0;
}


// FUNCTIONS:
bool read_positive(int *value){
    bool tof = true;
    int number;

    printf("Enter a positive value\n");
    if ((scanf("%d", &number) == 1) && number >0){
        while(getchar() != '\n');
        *value = number;
        tof = true;
    }else{
        while(getchar() != '\n');
        tof = false;
        printf("Invalid input.\n");
    }

    return tof;
}

int arvauspeli(int num){
    int cheated_no = num * 2 + 20;
    printf("You didn't get it right. I have %d euros.\n", cheated_no);
    return 0;
}
