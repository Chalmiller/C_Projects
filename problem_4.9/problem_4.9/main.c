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
    int sequenceLength;
    int total;
    int num;
    
    total = 0;
    
    printf("Sequence length: ");
    scanf("%d", &sequenceLength);
    
    for (int i = 0; i < sequenceLength; i++) {
        printf("Number: ");
        scanf("%d", &num);
        
        total += num;
    }
    printf("The sum of your sequence is: %d\n", total);
    return 0;
}
