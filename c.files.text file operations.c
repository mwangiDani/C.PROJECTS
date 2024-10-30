// program  using c .files
/*
Name:Mwangi Daniel Gitari
Reg No:CT101/G/21346/24
Date:29/10/2024
program  using c files
*/


#include<stdio.h>
#include<stdlib.h>

int main(){
	char sentence;
	FILE*fptr;
	
	fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\data.txt","w");
	if (fptr == NULL){
		printf("error opening a file ");
		exit(1);
	}
	

		printf("enter a sentence of 100 character:");
		scanf("%c",&sentence);
		
		printf(fptr,"%c",sentence);
		fclose(fptr);
		
			fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\data.txt","r");
	if (fptr == NULL){
		printf("error opening file for reading file ");
		exit(1);
	}
	fclose(fptr);
	
	fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\data.txt","a");
	if (fptr == NULL){
		printf("error opening file for appending file ");
		exit(1);
	}
	
	
		printf("enter a second sentence of 100 character:");
		scanf("%c",&sentence);
		
		printf(fptr,"%c",sentence);
		fclose(fptr);
		
		
		
		
		return 0;
		
	
}
