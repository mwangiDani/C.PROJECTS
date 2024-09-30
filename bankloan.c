// program to issue loans in a bank
/*
Aothur: Daniel Gitari.
Date:29/9/2024.
Reg no:CT101/G/21346/24.
program to issue loans in a bank
*/
#include <stdio.h>
int main(){
	int Age;
	float annual_income;
	
	printf("Enter the Age: ");
	scanf("%d\n",&Age);
	
	printf("enter the annual_income:");
	scanf("%f\n",&annual_income);
	 
	 if (Age>=21  &&  annual_income>=21000){
		 printf("congratulations you qualify for a loan.\n");
		 }
		 else{
        printf("unfortunately we are unable to offer you a loan at this time.");
		 }
	
		return 0;
	
}