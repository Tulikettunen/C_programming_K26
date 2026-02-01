//
// Created by tuuli on 28/01/2026.
//

#include <stdio.h>
#include "Week2_T5.h"

int main(){
    printf("Let's play!\n");
    int tie = 1;
    int lowest = 1;
    int highest = 6;
    int user_roll;
    //int count = 0;

    for (int i = 0; i < 3; i++) {
        //count++;
        printf("Enter a number between %d and %d.\n", lowest, highest);
        user_roll = read_range(lowest, highest);
        if (user_roll == highest) {
            printf("I got 6. It is a tie!\n");
            tie = 0;
        }
        else {
            printf("I got %d. I win!\n", user_roll + 1);
        }
    }
    printf("Better luck next time. Bye!");
}

//FUNCTIONS:
int read_range(int low, int high){
    int user_roll;
    printf("Roll a D%d dice, and enter the number you got:\n", high);
    while ((scanf("%d", &user_roll) != 1) || (user_roll < low) || (user_roll > high)){  //Looppaa kunnes syötteestä luettu onnistuneesti yksi integeri, joka on halutulla välillä.
        while(getchar() != '\n'); //virheen käsittelyä
        printf("That was not a number between %d-%d. Don'tcha try to cheat me!\n", low, high);
        printf("Try again:\n");
    }
    while(getchar() != '\n');   // virheen käsittely
    return user_roll;
}

