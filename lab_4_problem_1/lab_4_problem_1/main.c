//
//  main.c
//  lab_4_problem_1
//
//  Created by Chris Miller on 7/8/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define SIZE 3

void change(int * const array, const size_t size);
void printArray(int * const array, const size_t size);

int main(int argc, const char * argv[]) {
    // insert code here...
    int nums[SIZE] = {1,2,3};
    puts("The Array is:");
    printArray(nums, SIZE);
    puts("");
    change(nums, SIZE);
    puts("The change to array is:");
    for (int i =0; i < SIZE; ++i) {
        printf("%d ", nums[i]);
    }
    puts("");
    
    return 0;
}

void change(int * const array, const size_t size) {
    
    for (int i = 0; i < SIZE; ++i) {
        array[i] = array[i] * 2;
    }
}

void printArray(int * const array, const size_t size) {
    
    for (int i = 0; i < SIZE; ++i) {
        printf("%d ", array[i]);
    }
}
