//
//  main.c
//  lab_4_problem_2
//
//  Created by Chris Miller on 7/8/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    long value1 = 200000;
    long value2;
    long *lPtr;
    
    lPtr = &value1;
    
    printf("%ld\n", *lPtr);
    
    value2 = *lPtr;
    
    printf("%ld\n", value2);
    
    printf("%ld\n", &value1);
    
    printf("%ld\n", lPtr);
    
    printf("Yes, it is the same.\n");
    return 0;
}
