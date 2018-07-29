//
//  main.c
//  first_C_program
//
//  Created by Zlodeev on 7/19/18.
//  Copyright © 2018 makzzi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dice1, dice2;
    int total1, total2;
    time_t t;
    srand(time(&t));
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total1 = dice1 + dice2;
    printf("The first throw of a pair of dices: %d and %d.\nTheir sum is equal to: %d.\n", dice1, dice2, total1);
    dice1 = (rand() % 5) + 1;
    dice2 = (rand() % 5) + 1;
    total2 = dice1 + dice2;
    printf("The second throw of a pair of dices: %d and %d.\nTheir sum is equal to: %d.\n", dice1, dice2, total2);
    if (total1 > total2) {
        printf("The sum of the first throw is more than the sum of the second throw.\n");
    }
    else if (total2 > total1) {
        printf("The sum if the second throw is more than the sum of the first throw.\n");
    }
    else {
        printf("Throws is equal.\n");
    }
    return 0;
}
