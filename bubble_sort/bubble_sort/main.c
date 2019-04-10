//
//  main.c
//  bubble_sort
//
//  Created by Chris Miller on 7/11/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define SIZE 10

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[SIZE] = {0,5,2,6,3,4,5,6,3,10};
    
    puts("Data items in original order\n");
    
    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d\n", a[i]);
    }
    
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
        // loop to control number of comparisons per pass
        for (size_t i = 0; i < SIZE - 1; ++i) {
            // compare adjacent elements and swap them if first
            // element is greater than second element
            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    
    puts("\nData items in ascending order\n");

    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d\n", a[i]);
    }
    
    return 0;
}
