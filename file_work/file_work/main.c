//
//  main.c
//  file_work
//
//  Created by Chris Miller on 7/20/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    FILE *cfPtr; // cfPtr = clients.txt file pointer
    
    cfPtr = fopen("one.txt", "w");
    
    fprintf(cfPtr, "Christopher Miller");
    
    for (int i = 0; i < 200; i++) {
        int num_input;
        fscanf(cfPtr, "%d\n", &num_input);
        fprintf(cfPtr, "%d\n", num_input);
    }
    
    fclose(cfPtr); // fclose closes the file
}
    // fopen opens file; exits program if file cannot be opened
//    if ((cfPtr = fopen("clients.txt", "r")) == NULL) {
//        puts("File could not be opened");
//    }
//    else { // read account, name and balance from file
//        unsigned int account; // account number
//        char name[30]; // account name
//        double balance; // account balance
//
//        printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
//        fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
//
//        // while not end of file
//        while (!feof(cfPtr)) {
//            printf("%-10d%-13s%7.2f\n", account, name, balance);
//            fscanf(cfPtr, "%d%29s%lf", &account, name, &balance);
//        }
//
//        fclose(cfPtr); // fclose closes the file
//    }
//}
