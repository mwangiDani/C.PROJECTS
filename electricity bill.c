/*
Name: Mwangi Daniel Gitari
Reg No: CT101/G/21346/24
Date: 4/10/2024.
program to calculate electricity bill.
*/



#include<stdio.h>
int main(){
	int customerID, unitconsumed ,totalbill;
	float chargesperunit, surchagedfee ,totalamount;
	char customerName;
	
	printf("Enter the customer ID:");
	scanf("%d\n",&customerID);
	
	printf("Enter the umit consumed:");
	scanf("%d\n",&unitconsumed);
	
	printf("Enter the customer name:");
	scanf("%c\n",&customerName);
	
	if(unitconsumed <200){
		printf("the charges per unit is 1.20 ksh:");
	}
	else if(unitconsumed >=200 && unitconsumed<400);{
		printf("the charges per unit is 1.50 ksh:");
	}
	  if (unitconsumed >=400 && unitconsumed<600);{
		printf("the charges per unit is 1.80 ksh:");
	}
	 if(unitconsumed >600){
		printf("The charges per unit is 2.00 ksh:");
		
		totalbill = unitconsumed * chargesperunit;
		if(totalbill >400){
			printf(" the surchaged fee =0.15 * totalbill");
			
		}
		
		totalamount= totalbill + surchagedfee;
		if(totalbill<100){
			printf("total amount=100:");
		}
		
		printf("%d\n",customerID);
		printf("%c\n",customerName);
		printf("%d\n",unitconsumed);
		printf("%f\n",chargesperunit);
		printf("%f\n",totalamount);
		
		return 0;
	}
}
