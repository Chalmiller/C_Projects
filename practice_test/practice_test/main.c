//
//  main.c
//  practice_test
//
//  Created by Chris Miller on 6/29/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <math.h>

double triple(float);

double a;
double b;
double c;


int main(int argc, const char * argv[]) {
    
    a = 7.0;
    b = 7.0;
    c = 6.0;
    printf("okay %f", triple(a));
}

double triple(float n) {
    
    return (3 * n);
}
