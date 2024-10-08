// while
 /*
Author: Daniel Gitari
Reg no:CT101/G/21346/24
Date:4/10/2024
*/
#include<stdio.h>

int main()
{
	int i=0,sum=0,start,stop;
	
	printf("Enter while for while to start:");
	scanf("%d\n",&start);
	
	printf("Enter while for while to stop:");
	scanf("%d\n",&stop);
	
	
	while(i<start){
		printf("%d\n",i);
		i++;
		sum=sum+i;
		sum +=i;
		

	}
	printf("the sum is %d",sum);
	return 0;
}


