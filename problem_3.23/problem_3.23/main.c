//
//  main.c
//  problem_3.23
//
//  Created by Chris Miller on 6/23/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int scoreAttained(int);

int num_00;
int score;

int main(int argc, const char * argv[]) {
    
    printf("Enter your score: ");
    scanf("%d", &num_00);
    
    score = scoreAttained(num_00);
    
    printf("%d\n", score);
}

int scoreAttained(int num_0) {
    
    switch(num_0) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }
    return 0;
}
