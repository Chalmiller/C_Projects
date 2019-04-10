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
    
    printf("What size square would you like to print? ");
    scanf("%d", &squaresize);
    
    rows = squaresize;
    cols = squaresize;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i > 1 && i < cols) {
                if (j > 1 && j < cols) {
                    printf(" ");
                } else {
                    printf("#");
                }
            } else {
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}
