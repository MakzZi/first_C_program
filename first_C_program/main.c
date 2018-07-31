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
#define SIZE 50
#define RANGE 777

int main() {
    if(SIZE > 0) {
        srand(time(NULL));
        int* nums = (int*) malloc(SIZE * sizeof(int));
        if (!nums) {
            printf("error: not enough memory!\n");
            exit(1);
        }
        int smallest, biggest, i;
        double sum;
        nums[0] = (rand() % RANGE) + 1;
        smallest = biggest = sum = nums[0];
        printf("nums: %d; ", nums[0]);
        for (i = 1; i < SIZE; i++) {
            nums[i] = (rand() % RANGE) + 1;
            if (nums[i] < smallest) {
                smallest = nums[i];
            }
            else if (nums[i] > biggest) {
                biggest = nums[i];
            }
            sum += nums[i];
            printf("  %d;", nums[i]);
        }
        printf("...\nsmallest = %i\nbiggest = %i\naverage = %.3lf\n", smallest, biggest, sum/SIZE);
        free(nums);
    }
    return 0;
}
