// program to find compound interest
/*
Program to find compound interest
Author: Daniel Gitari
Date:21/9/2024
Reg no:CT/101/G/21346/24
*/
#include<stdio.h>
#include<math.h>
int main(){
	
// Declaration and initialization

float A,P,R,N,T,CI;
/*
A=" Final amount including interest"
P="Principal amount"
R="interest rate"
N= "Number of compound a year"
T="Total number of years"
*/

printf("Enter the principal amount:");
scanf("%f\n",&P);

printf(" Enter the interest rate in percentage:");
scanf("%f\n",&R);

printf("Enter the number of compound a year");
scanf("%f\n",&N);

printf("Enter the time(in years)");
scanf("%f\n",&T);

// calculating  total amount
A= P * pow((1+R/N),N*T);

//Calculating compound interest
CI=A-P;

printf("The compound interest is %.2f",CI);

return 0;
}







