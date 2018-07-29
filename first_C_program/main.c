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
#define SIZE 20
#define RANGE 100

int main() {
    srand(time(NULL));
    int nums[SIZE];
    int i, bubble, swiped, buffer;
    printf("UNSORTED: ");
    for (i = 0; i < SIZE; i++) {
        nums[i] = (rand() % RANGE) + 1;
        printf("%d;  ", nums[i]);
    }
    for (bubble = 0; bubble < SIZE-1; bubble++) {
        swiped = 0;
        for (i = bubble; i < SIZE; i++) {
            if (nums[bubble] > nums[i]) {
                buffer = nums[bubble];
                nums[bubble] = nums[i];
                nums[i] = buffer;
                swiped = 1;
            }
        }
        if (!swiped) break;
    }
    printf("\n  SORTED: ");
    for (i = 0; i < SIZE-1; i++) {
        printf("%d;  ", nums[i]);
    }
    printf("%d.\n", nums[SIZE-1]);
    return 0;
}
