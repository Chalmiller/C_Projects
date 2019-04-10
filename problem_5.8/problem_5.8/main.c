//
//  main.c
//  problem_5.8
//
//  Created by Chris Miller on 6/27/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    unsigned int x;
    
    x = (double) ceil(-fabs(-8 + floor((double)-5.5)));
    
    printf("fabs %d \n", x);
}
