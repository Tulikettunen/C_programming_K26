//
// Created by tuuli on 13/01/2026.
//

#include <stdio.h>
#include <stdbool.h>
#include "Week1_T1.h"

int main() {
    bool tof = true;

    float bus_ticket = 0.0;
    float taxi_price = 0.0;
    float money_in_account = 0.0;

    bus_ticket = bus_ticket_price(bus_ticket);
    taxi_price = taxi_price_func(taxi_price);
    money_in_account = how_much_in_account(money_in_account);

    while (tof) {
        int selection;

        if (money_in_account < bus_ticket && money_in_account < taxi_price) {
            printf("You don't have enough money for transport, walk you poor person!\n");
            tof = false;
        }
        else {
            printf("Please select a transport option. Press 1 for bus trip, press 2 for taxi trip. Press enter to finish\n");
            scanf("%d", &selection);

            if (selection == 1) {
                if (bus_ticket > money_in_account) {
                    printf("Not enough money for bus ticket. Choose again. \n");
                }
                else {
                    money_in_account -= bus_ticket;
                    printf("Bus trip paid, %6.2f € left in bank account \n", money_in_account);
                }
            }
            else if (selection == 2) {
                if (taxi_price > money_in_account) {
                    printf("Not enough money for taxi. Choose again \n");
                }
                else {
                    money_in_account -= taxi_price;
                    printf("Taxi trip paid, %6.2f € left in bank account \n", money_in_account);
                }
            }
        }
    }
}



float bus_ticket_price(float bus_price)
{
    printf("How much is the bus ticket?: \n");
    scanf("%f", &bus_price);
    return bus_price;
}

float taxi_price_func(float taxi_price) {
    printf("How much is the taxi?: \n");
    scanf("%f", &taxi_price);
    return taxi_price;
}

float how_much_in_account(float m) {
    printf("How much money do you have in your bank account?: \n");
    scanf("%f", &m);
    return m;
}