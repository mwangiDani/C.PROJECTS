#include<stdio.h>
#include<stdlib.h>

int main(){
	int number;
	FILE*fptr;
	
	fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\sample.txt","r");
	if (fptr == NULL){
		printf("error opening a file ");
		exit(1);
	}
		printf("the number we typed is %d",number);
		fclose(fptr);
		return 0;
		
		
	
}
