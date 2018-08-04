//
//  main.c
//  first_C_program
//
//  Created by Zlodeev on 7/19/18.
//  Copyright © 2018 makzzi. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#define QTY 3
FILE *fp;

int main() {
    fp = fopen("students.txt", "w");
    if (fp == 0) {
        puts("File can't be opened!");
        exit(1);
    }
    struct student *std[QTY];
    puts("IN FILE >>>");
    for (int i = 0; i < QTY; i++) {
        std[i] = (struct student*) malloc(sizeof(struct student));
        
        printf("Student #%i\nName: ", i+1);
        scanf("%s", &std[i]->firstName);
        fprintf(fp, "Student #%i\nName: %s\n", i+1, std[i]->firstName);
        
        printf("Surname: ");
        scanf("%s", &std[i]->lastName);
        fprintf(fp, "Surname: %s\n", std[i]->lastName);
        
        printf("Specialization: ");
        scanf("%s", &std[i]->specialization);
        fprintf(fp, "Specialization: %s\n", std[i]->specialization);
        
        printf("Number course: ");
        scanf("%i", &std[i]->course);
        fprintf(fp, "Number course: %i\n", std[i]->course);
        
        free(std[i]);
    }
    fclose(fp);
    return 0;
}
