//
//  main.c
//  linear_search
//
//  Created by Chris Miller on 7/11/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a[SIZE];
    
    puts("Data items in original order\n");
    
    // output original array
    for (size_t i = 0; i < SIZE; ++i) {
        a[i] = 2 * i;
    }
    
    printf("Enter integer search key: ");
    int searchKey; // value to locate in array a
    scanf("%d", &searchKey);
    
    size_t index = linearSearch(a, searchKey, SIZE);
    
    // display results
    if (index != -1) {
        printf("Found value at index %lu\n", index);
        }
    else {
        puts("Value not found");
        }
}

    // compare key to every element of array until the location is found
    // or until the end of array is reached; return index of element
    // if key is found or -1 if key is not found
size_t linearSearch(const int array[], int key, size_t size){
        // loop through array
        for (size_t n = 0; n < size; ++n) {
            if (array[n] == key) {
                return n; // return location of key
            }
        }
        return -1; // key not found
    }
    
