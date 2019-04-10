//
//  main.c
//  quiz_2_1
//
//  Created by Chris Miller on 7/6/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int array1[SIZE];

int averagearray(const int array[]);

int main(int argc, const char * argv[]) {
    
    printf("Here are the arrays?\n");
    for (int j = 0; j < SIZE; j++) {
        printf("Please enter a number: \n");
        scanf("%d", &array1[j]);
    }
    
    printf("Here is the average: %d\n", averageArray(array1));
    return 0;
}

int averageArray(const int array[]) {
    int average = 0;
    
    for (int i = 0; i < SIZE; i++) {
        average += array[i];
    }
    return (double) average/SIZE;
}
