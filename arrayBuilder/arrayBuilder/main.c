//
//  main.c
//  arrayBuilder
//
//  Created by Chris Miller on 7/1/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

#define FREQUENCY_SIZE 13

int main(int argc, const char * argv[]) {
    
    unsigned int frequency[FREQUENCY_SIZE] = {0};
    
    srand(time(NULL));
    
    printf("Here are the values?\n");
    
    for (unsigned int roll = 1; roll <= 36000; ++roll) {
        int total = 0;
        for (int num = 1; num <= 2; ++num) {
            size_t face = 1 + rand() % 6;
            total += face;
        }
        ++frequency[total];
        total = 0;
    }
    for (int j = 2; j < FREQUENCY_SIZE; ++j) {
        printf("%4d%17d\n", j, frequency[j]);
    }
    return 0;
}






