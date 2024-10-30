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
	int marks,i;
	char name;
	FILE*fptr;
	
	fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\student1.txt","w");
	if (fptr == NULL){
		printf("error opening a file ");
		exit(1);
	}
	
	
    	for(i=0;i<=4;i++){
				
	printf("enter your name:",i+1);
	scanf("%c\n",&name);
	fprintf(fptr,"Your name  is %c",name,i+1);
		
	
	
	
	printf("Enter your marks:",i+1);
	scanf("%d\n",&marks);
    fprintf(fptr,"Your marks are %d",marks,i +1);
    	}
    	fclose(fptr);
    	printf("Student data saved successfully in 'student1.txt'.\n");
		
		return 0;
}
		
	