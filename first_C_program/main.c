//
//  main.c
//  first_C_program
//
//  Created by Zlodeev on 7/19/18.
//  Copyright © 2018 makzzi. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 128
#define PASS_LENGTH 8

int main() {
    char buffer[MAX_LENGTH];
    printf("Create login: ");
    scanf(" %s", buffer);
    getchar();
    char login[strlen(buffer)+1];
    strcpy(login, buffer);
    int upper;
    int lower;
    int digit;
    int i = -1;
    while (1) {
        upper = lower = digit = 0;
        i = -1;
        printf("Create new password: ");
        do {
            i++;
            buffer[i] = getchar();
            if (isdigit(buffer[i])) {
                digit = 1;
                continue;
            }
            if (islower(buffer[i])) {
                lower = 1;
                continue;
            }
            if (isupper(buffer[i])) {
                upper = 1;
                continue;
            }
        } while (buffer[i] != '\n');
        buffer[i] = '\0';
        if (strlen(buffer) >= PASS_LENGTH) {
            if (digit && upper && lower) {
                break;
            }
            else {
                if (!digit) {
                    printf("The password must have at least one digit!\n");
                }
                if (!lower || !upper) {
                    printf("The password must contain upper and lower case letters!\n");
                }
            }
        }
        else {
            printf("The password must be greater than or equal to %d characters!\n", PASS_LENGTH);
        }
    }
    char password[i+1];
    strcpy(password, buffer);
    printf("Login and password is confirmed!\n");
    return 0;
}
