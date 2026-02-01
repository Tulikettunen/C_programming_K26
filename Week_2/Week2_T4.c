//
// Created by tuuli on 28/01/2026.
//
#include <stdio.h>
#include "Week2_T4.h"
#include <stdbool.h>

int main(){
    int sum = 0;
    int count = 0;
    int num = 0;

    printf("Enter integers and I shall calculate the average!\n");
    while (num >= 0){
        printf("Enter a positive integer to calculate, or negative to stop:\n");
        num = read_integer();
        if(num > 0) {
            sum += num;
            count++;
            printf("count +1 \n");
        }
    }

    printf("You entered %d positive numbers. The average is: %.3f \n", count, average(sum, count));
    return 0;
}

//FUNCTIONS:
int read_integer(void){
    int num = 0;
    while (scanf(" %d", &num) != 1 ){
        while(getchar() != '\n');
        printf("Invalid input, try again\n");
    }
    while(getchar() != '\n');
    printf("Successful entering \n");
    return num;
}


// Improved version with extra character check, does not allow extra characters after integer input, does not work yet, fucking pain in the ass,
//Luulin et sain sen ratkastua viimevuonna, mutta ei näköjään toimikkaan..
int read_integer2(void){
    int num = 0;
    char wrongchr;
    //while ( (scanf(" %d %c", &num, &wrongchr) != 2 ) ){     //(wrongchr != '\n')
    while ( (scanf(" %d", &num) != 1 || scanf(" %c", &wrongchr) == 1 ) ){
      //if(scanf("%d", &num) != 1) {    //scanf("%c", &extra) == EOF) //Miks tää ei toimi ylimääräsen virhesyötteen eliminoinnissa?

        /*
        if (wrongchr != '\n') {
            while(getchar() != '\n');
        }*/
        while(getchar() != '\n');
          printf("Invalid input, try again\n");


      //}
    }
    while(getchar() != '\n');
    printf("Successful entering \n");
    return num;
}

float average(int sum, int count){
  float average = sum / (count * 1.0);
  return average;
}
