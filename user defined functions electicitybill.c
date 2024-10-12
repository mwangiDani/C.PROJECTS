/*
Author: Daniel Gitari
Reg no:CT101/G/21346/24
Date:12/10/2024
 for loop -output numbers 1-30

*/



#include <stdio.h>
#include <string.h>
#include<math.h>

int multiplacation (int unitConsumed,float chargesperunit );
int sum (float totalbill ,float surcharged);

int main() {
    int customerID, unitConsumed;
    char customerName[50];
    float chargesperunit, totalBill, surcharge = 0.0;
    
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitConsumed);

    
    if (unitConsumed <= 199) {
        chargesperunit = 1.20;
    } else if (unitConsumed >= 200 && unitConsumed < 400) {
        chargesperunit = 1.50;
    } else if (unitConsumed >= 400 && unitConsumed < 600) {
        chargesperunit = 1.80;
    } else {
        chargesperunit = 2.00;
    }


    totalBill = unitConsumed * chargesperunit;

   
    if (totalBill > 400) {
        surcharge = totalBill * 0.15; 
    }

    
    totalBill += surcharge;

    
    if (totalBill < 100) {
        totalBill = 100;
    }

  
    
    printf("Customer ID     : %d\n", customerID);
    printf("Customer Name   : %s\n", customerName);
    printf("Units Consumed  : %d\n", unitConsumed);
    printf("Charges per Unit: Ksh %.2f\n", chargesperunit);
    printf("Total Amount to Pay: Ksh %.2f\n", totalBill);

    return 0;
}
int multiplacation (int unitConsumed,float chargesperunit ){
	int results;
	results= unitConsumed *chargesperunit;
	return results;
	
}
int sum (float totalbill ,float surcharge){
	int results;
	results=totalbill +surcharge;
	return results;
	
}
