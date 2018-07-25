//
//  main.c
//  first_C_program
//
//  Created by Zlodeev on 7/19/18.
//  Copyright © 2018 makzzi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256


int main() {
    printf("Enter string: ");
    char buffer[MAX_LENGTH];
    int i = -1;
    do {
        i++;
        buffer[i] = getchar();
    } while (buffer[i] != '\n');
    buffer[i] = '\0';
    i++;
    char string[i];
    for (int j = 0; j < i; j++) {
        string[j] = buffer[j];
    }
    printf("string = %s\n", string);
    return 0;
}
