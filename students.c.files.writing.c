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
	int marks,i,n;
	char name;
	FILE*fptr;
	
	fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\student.txt","w+");
	if (fptr == NULL){
		printf("error opening a file ");
		exit(1);
	}
	
    // Prompt user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

	  // Loop to read name and marks of each student
		for(i=0;i<=n;i++){
	printf("enter your name:",i+1);
	scanf("%c",&name);
	fprintf(fptr,"Your name  is %c",name,i+1);
		
	
	
	
	printf("Enter your marks:",i+1);
	scanf("%d",&marks);
    fprintf(fptr,"Your marks are %d",marks,i+1);
		}
    
		
		
			
    // Close the file
    fclose(fptr);
    
    printf("Student data appended successfully in 'students.txt'.\n");
		
		return 0;
		}

		
		
	