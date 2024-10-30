// program  using c .files
/*
Name:Mwangi Daniel Gitari
Reg No:CT101/G/21346/24
Date:29/10/2024
program  using c files
*/

#include<stdio.h>
#include<string.h>

 struct member{
	 char name [20];
	 int Id_no;
	 
	  }member1 ;
	  
	 int main(){
	 	FILE*fptr;
	 	
	 fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\data2.txt","w");
	if (fptr == NULL){
		printf("error opening a file ");
	exit(1);
	
	}

 
		 printf("enter your name:");
		 scanf("%s\n",&member1.name);
		  printf("your name is :%s\n",member1.name);
		  

		  
		 printf("enter your id no:");
		 scanf("%d\n",&member1.Id_no);
		  printf("your id_NO is :%d\n",member1.Id_no);
		  
		  
    fclose(fptr);
   printf("file opened successfully in 'data2.txt'.\n");
   
   
	 fptr = fopen( "C:\\Users\\USER\\Desktop\\New folder\\data2.txt","r");
	if (fptr == NULL){
		printf("error opening a file ");
	exit(1);
	
	}
	fclose(fptr);
	

		 return 0;
}
		 
	 