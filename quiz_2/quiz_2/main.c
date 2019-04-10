//
//  main.c
//  quiz_2
//
//  Created by Chris Miller on 7/6/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <stddef.h>
#define SIZE 10

int averageArray(void);

int builtArray[SIZE];

int num_0;
int num_1;
int num_2;
int num_3;
int num_4;
int num_5;
int num_6;
int num_7;
int num_8;
int num_9;

int main(int argc, const char * argv[]) {
    
    // build results array
    printf("Please enter an integer: \n");
    scanf("%d", &num_0);
    printf("Please enter an integer: \n");
    scanf("%d", &num_1);
    printf("Please enter an integer: \n");
    scanf("%d", &num_2);
    printf("Please enter an integer: \n");
    scanf("%d", &num_3);
    printf("Please enter an integer: \n");
    scanf("%d", &num_4);
    printf("Please enter an integer: \n");
    scanf("%d", &num_5);
    printf("Please enter an integer: \n");
    scanf("%d", &num_6);
    printf("Please enter an integer: \n");
    scanf("%d", &num_7);
    printf("Please enter an integer: \n");
    scanf("%d", &num_8);
    printf("Please enter an integer: \n");
    scanf("%d", &num_9);
    
    int builtArray[SIZE] = {num_0, num_1, num_2, num_3, num_4, num_5, num_6, num_7, num_8, num_9};

    printf("Here is the average of the array: %d\n", averageArray());
    
    return 0;
}

int averageArray(void) {
    int average = 0;
    
    for (int i = 0; i < SIZE; ++i) {
        average += builtArray[i];
        printf("%d", builtArray[i]);
    }
    return (double)(average/SIZE);
}

