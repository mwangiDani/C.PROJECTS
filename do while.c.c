// do while loop

/*
do while loop
Author: Daniel Gitari
Reg no:CT101/G/21346/24
Date:4/10/2024
*/

#include<stdio.h>

int main()
{
	int i=0,start,sum, stop;
	
	printf("enter a while for when to start:");
	scanf("%d\n",&start);
	printf("enter  a while for when to stop:");
	scanf("%d\n",&stop);

	
	do{
		printf("%d\n",i);
		i++;
		sum +=i;
	}while (i<=start);
	printf("the sum is %d",sum);
	return 0;
		
	
}