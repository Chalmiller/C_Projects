//
//  main.c
//  problem_5.15
//
//  Created by Chris Miller on 7/9/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

double hypotenuse(double a, double b);

int main(int argc, const char * argv[]) {
    
    double side_1 = 5;
    double side_2 = 10;
    
    double hypotenuse_1 = hypotenuse(side_1, side_2);
    printf("The hypotenuse of your triangle is equal to %.2f\n", hypotenuse_1);
    return 0;
}

double hypotenuse(double a, double b) {
    
    double c;
    c = (a*a) + (b*b);
    
    return c;
}
