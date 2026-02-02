//
// Created by tuuli on 28/01/2026.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "Week2_T6.h"
#include "Week2_T4.h"

#define DICE_6 6
#define DICE_10 10

int main(void){
    bool ton = true;
    int choice;
    int language;
    printf("Welcome to the dice throwing program!\n");
    printf("Please select a language / Valitse kieli:\n1. English (recommended)\n 2. Suomi (kaikkia merkkejä ei välttämättä tueta))\n:");
    language = read_range(1,2);

    while (ton){
        language = read_range(1,2);
    	print_menu(language);
    	choice = read_range(1,3);

    	switch (choice){
    		case 1:
    	    	roll_dice_X(DICE_6);
    			break;
    		case 2:
    			roll_dice_X(DICE_10);
    			break;
    		case 3:
    		    if (language == 2){
    		        printf("Lopetetaan noppaohjelma, hei hei!\n");
    		    }
    		    else{
    		        printf("Quitting the dice program, bye bye!\n");
    		    }
    			ton = false;
    			break;
    		default:
    	        printf("The choice you entered is not valid, please choose 1 from the menu options.\n");
    			break;
    	}
    }

/*
    while(ton){
        print_menu();
        if (scanf("%d", &choice) != 1) {
            while(getchar() != '\n');
            printf("Syötäthän vain numeroita! Valitse 1 Menussa esitetyistä vaihtoehdoista.\n");
        }else if (choice == 1) {
            roll_d6();
            while(getchar() != '\n');
        }else if (choice == 2){
            while(getchar() != '\n');
            roll_d20();
        }else if (choice == 3) {
            while(getchar() != '\n');
            ton = false;
        }else {
            while(getchar() != '\n');
            printf("Syöttämänne valinta ei ole kelvollinen, valitse 1 Menussa esitetyistä vaihtoehdoista.\n");
        }
    }

 */
    return 0;
}


// FUNCTIONS:
void print_menu(int *lan){
    switch (*lan){
        case 1:
            printf("Choose from the following:\n1. Roll a D%d dice.\n2. Roll a D%d dice.\n3. Quit.\n", DICE_6, DICE_10);
            break;
        case 2:
            printf("Valitse seuraavista:\n1. Heitä D%d noppaa.\n2. Heitä D%d noppaa.\n3. Lopeta.\n", DICE_6, DICE_10);
            break;
        default:
            printf("Language not supported, defaulting to English.\n");
            printf("Choose from the following:\n1. Roll a D%d dice.\n2. Roll a D%d dice.\n3. Quit.\n", DICE_6, DICE_10);
            *lan = 1;
            break;
    }
}

int roll_d6(){
    printf("Heität D6 noppaa!\n");
    srand(time(NULL));

    int x = 7;
    while(x > 6) {
        x = 1 + rand()/((7 + 1u)/6);
    }
    printf("Silmäluku: %d \n",  x);
    return 0;
}

int roll_d20(){
    srand(time(NULL));

    printf("Heität d20 noppaa!\n");
    int x = 21;
    while(x > 20) {
        x = 1 + rand()/((21 + 1u)/20);
    }
    printf("Silmäluku:%d \n",  x);
    return 0;
}

int roll_dice_X(int dice_X){
	srand(time(NULL));
    printf("Heität d%d noppaa!\n", dice_X);
    int x = dice_X + 1;
    int y = x;
    while(x > dice_X) {
        x = 1 + rand()/((y + 1u)/dice_X);
    }
    printf("Silmäluku:%d \n",  x);
    return x;
}

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

int read_range(int low, int high){
    int user_input;
    while ((scanf("%d", &user_input) != 1) || (user_input < low) || (user_input > high)){  //Looppaa kunnes syötteestä luettu onnistuneesti yksi integeri, joka on halutulla välillä.
        while(getchar() != '\n'); //virheen käsittelyä
        printf("That was not a number between %d-%d. \n", low, high);
        printf("Try again:\n");
    }
    while(getchar() != '\n');   // virheen käsittely
    return user_input;
}