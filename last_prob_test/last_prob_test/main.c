//
//  main.c
//  last_prob_test
//
//  Created by Chris Miller on 7/14/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#define SIZE 80

void getVowelCount(const char * const sPtr);

int main(int argc, const char * argv[]) {
    char sentence[SIZE];
    
    puts("Enter a line of text: \n");
    fgets(sentence, SIZE, stdin);
    
    printf("The total number of vowels present is: \n");
    getVowelCount(sentence);
    return 0;
}

void getVowelCount(const char * const sPtr) {
    
     int length = 0;
    
    for (int i = 1; i < SIZE - 1; ++i) {
        
        if (sPtr[i] == "a") {
            ++length;
        }
        if (sPtr[i] == "o") {
            ++length;
        }
        if (sPtr[i] == "u") {
            ++length;
        }
        if (sPtr[i] == "i") {
            ++length;
        }
        if (sPtr[i] == "e") {
            ++length;
        }
        if ('\0' == sPtr[i]) { // base case
            return; }
    }
    printf("%d\n", length);
}
