//
//  main.c
//  problem_3.23
//
//  Created by Chris Miller on 6/23/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int main(void) {
    
    
    for (int i = 0; i <= 10; i++) {
        if (i == 0) {
            printf("N \t 10*N \t 100*N \t 1000*N\n");
        } else {
            printf("%d \t %d \t %d \t %d\n", i, 10*i, 100*i, 1000*i);
        }
    }
    return 0;
}
