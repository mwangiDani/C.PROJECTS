// for loop -output numbers 1-30

/*
Author: Daniel Gitari
Reg no:CT101/G/21346/24
Date:4/10/2024
 for loop -output numbers 1-30

*/


#include <stdio.h>
int main (){
	int i,sum=0,start, stop;
	
	printf("Enter for for a while to start:");
	scanf("%d\n",&start);
	
	printf("Enter for for a while to stop:");
	scanf("%d\n",&stop);
	
	for(i=start;i>=stop;i--){
		printf("%d\n",i);
		sum = sum + i;
	}
	printf(" the sum is %d",sum);
	return 0;
}
