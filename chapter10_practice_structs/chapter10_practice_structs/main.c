//
//  main.c
//  chapter10_practice_structs
//
//  Created by Chris Miller on 7/14/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define EMPLOYEES 10

void printLowest(const int array[], int key, size_t size);

struct employee {
    int *id;
    double *salary;
};

struct employee aEmployee;

int main(int argc, const char * argv[]) {

    aEmployee employees[EMPLOYEES];
    
    int *id[] = {1,2,3,4,5,6,7,8,9,10};
    double *salary[] = {10.00, 20.00, 30.00, 40.00, 50.00, 60.00, 70.00, 80.00, 90.00, 100.00};
    
    return 0;
}

void change(int * const array, const size_t size) {
    
    for (int i = 0; i < SIZE; ++i) {
        array[i] = array[i] * 2;
    }
}

void printLowest(aEmployee * int employeeArray, size_t EMPLOYEES){
    // loop through array
    double lowest = 0;
    
    for (size_t n = 0; n < EMPLOYEES; ++n) {
        if (employeeArray[i].salary <  lowest) {
            lowest = employeeArray[i].salary;
        }
    }
    for (size_t n = 0; n < EMPLOYEES; ++n) {
        if (employeeArray[i].salary ==  lowest) {
            employeeArray[i].salary = employeeArray[i].salary + (employeeArray[i].salary * .10);
            printf("The lowest salary belongs to employee id: %d", employeeArray[i].id)
        }
    }
}
