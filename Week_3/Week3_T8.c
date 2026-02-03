//
// Created by tuuli on 03/02/2026.
//
#include "Week3_T8.h"

#ifdef T8_DONE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 15
#define MIN 0
#define MAX 100

int main_T8(){
    srand(time(NULL));

    int randomlist[SIZE];        //Luo lista random numeroilla
    for (int i = 0; i < SIZE; i++){
        randomlist[i] = create_random();
    }

    print_numbers(randomlist, SIZE);

    return 0;
}


void print_numbers(const int *array, int count){
    for (int i = 0; i< count; i++){
        printf("%*d\n", 8, array[i]);
    }
}


int create_random_in_range(int min, int max){
    return rand() % (max - min + 1) + min;
}

int create_random(){
    return rand() % (RAND_MAX + 1);
}

#endif