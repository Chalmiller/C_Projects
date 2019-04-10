//
//  main.c
//  lab_5
//
//  Created by Chris Miller on 7/15/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

unsigned int reverseBits(unsigned int num);

int main(void)
{
    unsigned int x; // variable to hold user input
    
    printf("%s", "Enter a nonnegative int: ");
    scanf("%u", &x);
    
    printf("%u\n", reverseBits(x));
    getchar();
}

// display bits of an unsigned int value
unsigned int reverseBits(unsigned int num)
{
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;
    
    num >>= 1;
    while(num)
    {
        reverse_num <<= 1;
        reverse_num |= num & 1;
        num >>= 1;
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
}
