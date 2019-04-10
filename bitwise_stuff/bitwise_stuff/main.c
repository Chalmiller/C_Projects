//
//  main.c
//  bitwise_stuff
//
//  Created by Chris Miller on 7/20/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    unsigned int num1 = 960;
    unsigned int num2 = 1000; 
    
    unsigned int result_num;
    
    puts("16 bit positions using the left shift operator << is\n");
    num1 = num1 << 16;
    num2 = num2 << 16;
    printf("The two unsigned ints shifted left 16 bits are: %u and %u\n", num1, num2);
    
    result_num = (num1 | num2);
    printf("The two unsigned ints operated on by the bitwise operator OR is: %u\n", result_num);
}
