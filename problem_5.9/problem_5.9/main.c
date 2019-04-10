//
//  main.c
//  problem_5.9
//
//  Created by Chris Miller on 6/27/18.
//  Copyright © 2018 Chris Miller. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float calculateCharges(float);

float time_parked_0;
float time_parked_1;
float time_parked_2;
float w;
float x;
float y;
float z;
float total_charge = 0;
float total_hours = 0;

int main(int argc, const char * argv[]) {
    
    printf("How long did you park for: ");
    scanf("%f", &time_parked_0);
    x = calculateCharges(time_parked_0);
    printf("How long did you park for: ");
    scanf("%f", &time_parked_1);
    y = calculateCharges(time_parked_1);
    printf("How long did you park for: ");
    scanf("%f", &time_parked_2);
    z = calculateCharges(time_parked_2);
    total_charge = x + y + z;
    total_hours = time_parked_0 + time_parked_1 + time_parked_2;
    
    printf("Car\t\tHours\t\tCharge\n");
    printf("1\t\t%.2f\t\t%.2f\n", time_parked_0, x);
    printf("2\t\t%.2f\t\t%.2f\n", time_parked_1, y);
    printf("3\t\t%.2f\t\t%.2f\n", time_parked_2, z);
    printf("Total\t%.2f\t\t%.2f\n", total_hours, total_charge);
    
}

float calculateCharges(float num) {
    
    float cost = 0;
    
    if ( num >= 24) {
        cost = 10;
    } else if (num <= 3) {
        cost = 2;
    } else {
        cost += 2;
        for (float i = 3; i < num; ++i) {
            cost += 0.50;
        }
    }
    return cost;
}
