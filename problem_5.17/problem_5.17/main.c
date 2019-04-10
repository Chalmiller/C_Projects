//
//  main.c
//  problem_5.9
//
//  Created by Chris Miller on 6/27/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int evenSum(int);

int num_00;
int evenNumSum;

int main(int argc, const char * argv[]) {
    
    printf("Enter your first number: ");
    scanf("%d", &num_00);
    
    evenNumSum = evenSum(num_00);
    
    printf("Your average is: %d\n", evenNumSum);
}

int evenSum(int num_0) {
    
    int sum = 0;
    
    for (int i = 1; i < num_0; ++i) {
        if (i%2 == 0) {
            sum += i;
        }
    }
    return sum;
}
