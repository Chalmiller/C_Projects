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
    
    printf("(A)\n");
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
    printf("(B)\n");
    for (int rows = 0; rows <= squaresize; rows++) {
        count = rows;
        for (int cols = 0; cols <= squaresize; cols++) {
            while (count < squaresize){
                printf("*");
                count += 1;
            }
            printf(" ");
        }
        printf("\n");
    }
    printf("(C)\n");
    for (int rows = 1; rows <= squaresize; rows++) {
        count = rows;
        for (int cols = 1; cols <= squaresize; cols++) {
            while (count > 1){
                printf(" ");
                count -= 1;
            }
            if (cols < (squaresize - rows + 2)) {
                printf("*");
            } else {
                continue;
            }
        }
    printf("\n");
    }
    printf("(D)\n");
    for (int rows = 1; rows <= squaresize; rows++) {
        count = rows;
        for (int cols = 1; cols <= squaresize; cols++) {
            while (count < squaresize){
                printf(" ");
                count += 1;
            } if (cols > (squaresize - rows)){
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
