//
//  main.c
//  problem_5.35
//
//  Created by Chris Miller on 7/9/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main(int argc, const char * argv[]) {
    
    unsigned int side_1 = 10;
    
    unsigned long long int fibonacci_num = fibonacci(side_1);
    printf("The fibonacci number is %llu\n", fibonacci_num);
    return 0;
}

unsigned long long int fibonacci(unsigned int n) {
    
    if ( n == 0 || n == 1 ) {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
