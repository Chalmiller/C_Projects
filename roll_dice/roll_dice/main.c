//
//  main.c
//  roll_dice
//
//  Created by Chris Miller on 7/20/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICE 6
#define REPEAT 10000


int rollDice(void);
int findLargest(int array[]);

int main(void)
{
    // randomize random number generator using current time
    srand(time(NULL));
    
    int frequency[REPEAT];
    int biggest;
    
    for (int i = 0; i < REPEAT; i++) {
        frequency[i] = rollDice();
    }
    biggest = findLargest(frequency);
    
    printf("The largest value in the array is: %d\n", biggest);
    
}

int findLargest(int array[]) {
    int largest_value = 0;
    
    for (int j = 0; j < REPEAT; j++) {
        if (array[j] > largest_value) {
            largest_value = array[j];
        }
    }
    
    return largest_value;
}

// roll dice, calculate sum and display results
int rollDice(void)
{
    int dice[6];
    for (int i = 0; i < DICE; i++) {
        dice[i] = 1 + (rand() % 6);
    }
    
    for (unsigned int pass = 1; pass < DICE; ++pass) {
        for (size_t i = 0; i < DICE - 1; ++i) {
            if (dice[i] > dice[i + 1]) {
                int hold = dice[i];
                dice[i] = dice[i + 1];
                dice[i + 1] = hold;
            }
        }
    }
    
    int sum_of_largest = 0;
    for (int largest = 3; largest < DICE; largest++) {
        sum_of_largest += dice[largest];
    }
    
    return sum_of_largest; // return sum of dice
}

