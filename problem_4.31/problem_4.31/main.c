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
    int squaresize;
    int rows;
    int cols;
    int count;
    
    printf("What size square would you like to print? ");
    scanf("%d", &squaresize);
    
    rows = 0;
    cols = 0;
    
    for (int rows = 1; rows <= squaresize; rows++) {
        count = rows;
        for (int cols = 1; cols <= squaresize; cols++) {
            while (count > 0){
                printf("*");
                count -= 1;
            }
            printf(" ");
        }
        printf("\n");
    }
}

