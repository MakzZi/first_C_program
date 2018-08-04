//
//  main.c
//  first_C_program
//
//  Created by Zlodeev on 7/19/18.
//  Copyright © 2018 makzzi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
FILE *fp;

int main() {
    fp = fopen("students.txt", "r");
    if (fp == 0) {
        puts("File can't be opened!");
        exit(1);
    }
    char line[120];
    while (!feof(fp)) {
        fgets(line, 120, fp);
        if (!feof(fp)) {
            printf("%s", line);
        }
    }
    fclose(fp);
    return 0;
}
