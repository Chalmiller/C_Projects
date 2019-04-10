//
//  main.c
//  switch_statement
//
//  Created by Chris Miller on 6/29/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>



int main(void) {
    int grade;
    int adder;
    
    adder = 0;
    
    printf("enter a num: ");
    
    switch(grade) {
        case 'A':
            ++adder;
            break;
        case 'B':
            ++adder;
            break;
        case 'C':
            ++adder;
            break;
        default:
            printf("not a number\n");
            puts("Enter a new grade\n");
            break;
    }
}
