//
//  main.c
//  problem_5.9
//
//  Created by Chris Miller on 6/27/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int x;

int main(int argc, const char * argv[]) {
    
    x = 1;
    do {
        printf("%d", x);
    } while (++x <= 10);
}

