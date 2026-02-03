//
// Created by tuuli on 03/02/2026.
//

#include "Week3_T9.h"

#ifdef T9_DONE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define SIZE 20
#define MIN 1
#define MAX 20


int main_T9(void){
    const unsigned int *rand_numbs = create_random_list(MIN, MAX);
    print_numbers_T9(rand_numbs, SIZE);

    bool ton = true;
    while (ton){
        int what = read_what();
        while(getchar() != '\n');
        if ( what == 0) {
            ton = false;
        }
        else if (find_first(rand_numbs, what) == -1){
            printf("Number not found.\n");
        }
        else {
            printf("Index of number %d you're searching is: %d \n", what, find_first(rand_numbs, what));
        }
    }
    return 0;
}

unsigned int *create_random_list(int min, int max){
    static unsigned int randomlist[SIZE];        //Luo lista random numeroilla
    for (int i = 0; i < SIZE; i++){
        if (i == SIZE - 1){
            randomlist[i] = 0;
        }
        else{
            randomlist[i] = rand() % (max - min + 1) + min;
        }
    }
    return randomlist;
}

void print_numbers_T9(const unsigned int *array, int count){
    for (int i = 0; i< count; i++){
        printf("%*d\n", 8, array[i]);
    }
}

int find_first(const unsigned int *array, unsigned int what){
    int index = -1;
    for ( int i = 0; array[i] != 0; i ++){
        if (array[i] == what){
            index = i;
            break;
        }
    }
    return index;
}

int read_what(void) {
    printf("Enter a number to search for (0 to quit):\n");
    int what;
    while (scanf("%d", &what) != 1 || what < 0 || what > MAX) {
        while(getchar() != '\n');
        printf("Invaild input, try again:\n");
    }
    return what;
}



#endif