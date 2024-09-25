
// program to calculate simple interest
/*
program to calculate simle interest
Author: Daniel Gitari
Reg no:CT/101/G/21346/24
Date:24/9/2024
*/
#include <stdio.h>
int main() {
    float principal_amount;
    float rate_values;
	float time ;
    float simple_interest;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);

    printf("Enter the time : ");
    scanf("%f", &time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate_values);

    
    simple_interest = (principal_amount * time * rate_values) / 100;

    
    printf("The simple_interest is: %f\n",simple_interest);

    return 0;
