//
//  main.c
//  problem_5.16
//
//  Created by Chris Miller on 7/9/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define SIZE 5

int integerPower(int base, int exponent);

int main(int argc, const char * argv[]) {
    
    double side_1 = 3;
    double side_2 = 10;
    
    int list[SIZE] = {1,2,3,4,5};
    
    int ptr = list;
    
    ptr++;
    
    printf("%d ", list[0]);
    
    printf("%d ", ptr[0]);
    
    printf("%d", ptr);
    
    int exponential = integerPower(side_1, side_2);
    printf("The exponential value to your base is %d\n", exponential);
    return 0;
}

int integerPower(int base, int exponent) {
    
    int answer = 1;
    for (int i = 0; i < exponent; ++i) {
        answer *= base;
    }
    
    return answer;
}
