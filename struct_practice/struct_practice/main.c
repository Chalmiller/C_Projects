//
//  main.c
//  struct_practice
//
//  Created by Chris Miller on 7/20/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

#define COURSES 30

struct course {
    int section;
    char name[20];
    char grade;
};

typedef struct course Course;

void populate(Course * const course_array);
void print(Course * const course_array);

int main(int argc, const char * argv[]) {
    
    Course courses[COURSES];
    
    populate(courses);
    
    return 0;
}

void populate(Course * const course_array) {
    
    int sect = 0;
    char nombre;
    char grades;
    
    for (int i = 0; i < COURSES; i++) {
        course_array[i].section = scanf("%d", &sect);
        course_array[i].name[0] = scanf("%c", &nombre);
        course_array[i].grade = scanf("%c", &grades);
        
        print(course_array);
    }
}

void print(Course * const course_array) {
    
    for (int i = 0; i < COURSES; i++) {
        printf("%d", course_array[i].section);
        printf("%c", course_array[i].name[0]);
        printf("%c", course_array[i].grade);
    }
}
