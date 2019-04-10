//
//  main.c
//  rand_num_gen
//
//  Created by Chris Miller on 7/20/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void evaluate(int *array, int *neg, int *odd, int *even);

int main(int argc, const char * argv[]) {
    
    int array[SIZE];
    
    int negs = 0;
    int odds = 0;
    int evens = 0;
    
    srand(time(NULL));
    
    for (int i = 0; i < SIZE; i++) {
        array[i] =  (rand() % 1025) - 501;
    }
    
    evaluate (array, &negs, &odds, &evens);
    
    printf("The number of negative values is: %d\n", negs);
    
    printf("The number of even values is: %d\n", evens);
    
    printf("The number of odd values is: %d\n", odds);
    
    return 0;
}

void evaluate(int *array, int *neg, int *odd, int *even) {
    for (int j = 0; j < SIZE; j++) {
        if (array[j] < 0) {
            *neg += 1;
        } else if (array[j]%2 == 0) {
            *even +=1;
        } else if (array[j]%2 == 1) {
            *odd +=1;
        }
    }
    return;
}
