//
//  main.c
//  Chapter 3
//
//  Created by Chris Miller on 6/23/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include "main.h"

int main(void){
    float principal;
    float rate;
    float days;
    float totalInterest;
    int loans;
    
    totalInterest = 0;
    
    printf("How many loans would you like to calculate for: ");
    scanf("%d", &loans);
    
    while (loans > 0) {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);
        
        printf("Enter interest rate: ");
        scanf("%f", &rate);
        
        printf("Enter term of the loan in days: ");
        scanf("%f", &days);
        
        totalInterest = principal * rate * days / 365;
        
        printf("The interest charge is %.2f\n", totalInterest);
    }
}
