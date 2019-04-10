//
//  main.c
//  problem_3.32
//
//  Created by Chris Miller on 6/23/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int factorial;
    int sum;
    
    sum = 0;
    
    printf("What factorial would you like to caluclate? ");
    scanf("%d", &factorial);
    
    while(factorial > 0) {
        if (sum == 0) {
            sum += factorial;
        } else {
            sum *= factorial;
        }
        factorial -= 1;
    }
    printf("The value of your factorial is: %d\n", sum);
    return 0;
}
