#include<stdio.h>
#include<stdlib.h>

int main(){
	int number;
	FILE*fptr;
	
	fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\sample.txt","w");
	if (fptr == NULL){
		printf("error opening a file ");
		exit(1);
	}
		printf("enter a number:");
		scanf("%d",&number );
		
		fprintf(fptr,"%d",number);
		fclose(fptr);
		return 0;
		
		
	
}
