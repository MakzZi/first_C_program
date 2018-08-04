//
//  student.h
//  first_C_program
//
//  Created by Zlodeev on 8/4/18.
//  Copyright © 2018 makzzi. All rights reserved.
//

#ifndef student_h
#define student_h
#define LENGTH 100

struct student {
    char firstName[LENGTH];
    char lastName[LENGTH];
    char specialization[LENGTH];
    int course;
};

void printStudent(struct student std) {
    if (std.course < 0 || std.course > 9) {
        std.course = 0;
    }
    printf("Name: %s\nSurname: %s\nSpecialization: %s\nCourse: %i\n", std.firstName, std.lastName, std.specialization, std.course);
}

#endif /* student_h */
