//
//  main.c
//  lab_5_problem_2
//
//  Created by Chris Miller on 7/15/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

//
//  main.c
//  chapter10_practice_structs
//
//  Created by Chris Miller on 7/14/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define EMPLOYEES 10

struct student {
    char *lastName;
    char *firstName;
    int id;
    int age;
    char *address;
} studentRecord;

int main(int argc, const char * argv[]) {

    struct student studentRecord;
    
    studentRecord.lastName = "Miller";
    studentRecord.firstName = "Chris";
    studentRecord.id = 1001;
    studentRecord.age = 28;
    studentRecord.address = "2565 Newhall St.";
    
    printf("lastName: %s\n", studentRecord.lastName);
    printf("firstName: %s\n", studentRecord.firstName);
    printf("id: %u\n", studentRecord.id);
    printf("id: %u\n", studentRecord.age);
    printf("address: %s\n", studentRecord.address);
    

    return 0;
}
