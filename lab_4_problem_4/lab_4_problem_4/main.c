//
//  main.c
//  lab_4_problem_4
//
//  Created by Chris Miller on 7/8/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 19

int main(void)
{
    int condition = 0;
    
    do {
        char password[SIZE];
        
        int hasDigits = 0;
        int hasPunct = 0;
        int hasUpper = 0;
        int hasLower = 0;
        int length = 0;
        int isThere = 0;
        
        printf("Please input your password: ");
        scanf ("%[^\n]%*c", password);
        
        if (isdigit(password[0]) == 1 ) {
            condition = 0;
            printf("You may not start with a digit\n");
        }
        if (ispunct(password[0]) == 1 ) {
            condition = 0;
            printf("You may not start with a punctuation character\n");
        }
        for (int i = 1; i < SIZE - 1; ++i) {
            if (isdigit(password[i]) == 1) {
                ++hasDigits;
            }
            if (ispunct(password[i]) == 1) {
                ++hasPunct;
            }
            if (islower(password[i]) == 1) {
                ++hasLower;
            }
            if (isupper(password[i]) == 1) {
                ++hasUpper;
            }
            if (isblank(password[i]) == 0) {
                ++isThere;
            }
        }
        if (hasPunct < 1) {
            condition = 0;
            hasPunct = 0;
            printf("Needs at least one punctuation character\n");
        }
        if (hasDigits < 2) {
            condition = 0;
            hasDigits = 0;
            printf("Needs at least two digits\n");
        }
        if (hasUpper < 1) {
            condition = 0;
            hasUpper = 0;
            printf("Needs at least one uppercase character\n");
        }
        if (hasLower < 1) {
            condition = 0;
            hasLower = 0;
            printf("Needs at least one lowercase character\n");
        }
        if (isThere < 8) {
            condition = 0;
            isThere = 0;
            printf("Password is too short\n");
        }
        if (isThere > 15) {
            condition = 0;
            isThere = 0;
            printf("Password is too long\n");
        }
        else if (hasPunct >= 1 && hasDigits >= 2 && hasUpper >= 1 && hasLower >= 1){
            condition = 1;
        }
    } while (condition == 0);
}
