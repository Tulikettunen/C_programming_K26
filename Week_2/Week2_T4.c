//
// Created by tuuli on 28/01/2026.
//
#include <stdio.h>
#include "Week2_T4-h"



int read_integer(){
  int num = 0;
  while (num == 0){
  if(scanf("%d", &num) != 1) {
      while(getchar() != '\n');
      printf("Invalid input, try again\n");
  }
  }
  return num;
}

float average(int sum, int count){
  float average = sum / (count * 1.0);
  return average;
}

int main(){
    int sum = 0;
    int count = 0;

    printf("Enter an integers and I shall calculate the average!\n");
    while (num >= 0){
    	printf("Enter a positive integer to calculate, or negative to stop:\n");
        num = read_integer(num);
        if(num > 0) {
            sum += num;
            count++;
            while(getchar() != '\n');
        }
    }

    printf("You entered %d positive numbers. The average is: %.3f \n", count, average(sum, count));
    return 0;
}