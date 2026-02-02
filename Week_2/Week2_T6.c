//
// Created by tuuli on 28/01/2026.
//

//TUULI'S NOTES ABOUT THE ASSIGNENMENT!!:
//Ohjelmaan lisätty tehtävänannon ulkopuolelta kielivalinta suomi/englanti.
//Omaksi iloksi, ja koska alkuperäinen tehtävä oli suomeksi, ja nykyään kirjoitan englanniksi,
//ja tuli sotkuisen näköinen, ja ääkköset ei toimi, joten päätin lisätä vähän toiminnallisuutta tehtävään.
//(read_range funktio siirretty My_C_header.c/.h tiedostoihin, koska se on yleiskäyttöinen,
//tämän vuoksi siihen ei vielä implementoitu kielivalikkoa)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "Week2_T6.h"
#include "Week2_T4.h"
#include "C:/Users/tuuli/CLionProjects/My_C_header/My_C_header.h"

#define DICE_6 6
#define DICE_10 10

#ifdef T6_DONE

int main_T6(void){
    bool ton = true;
    int choice;
    int language;
    //int *language_p = &language;
    printf("Welcome to the dice throwing program!\n");
    printf("Please select a language / Valitse kieli:\n1. English (recommended)\n2. Suomi (kaikkia merkkejä ei välttämättä tueta))\n");
    language = read_range(1,2);

    while (ton){
    	print_menu(&language);
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


//No longer needed exactly, old ones, replaced with multifaceted function roll_dice_X in My_C_header.h
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

int roll_d10(){
    srand(time(NULL));

    printf("Heität d10 noppaa!\n");
    int x = 11;
    while(x > 10) {
        x = 1 + rand()/((21 + 1u)/10);
    }
    printf("Silmäluku:%d \n",  x);
    return 0;
}

#endif //CODE_DONE

