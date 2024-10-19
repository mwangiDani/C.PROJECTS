// program to prompt user to enter details  using structures
/*
Name:Mwangi Daniel Gitari
Reg No:CT101/G/21346/24
Date:19/10/2024
program to prompt user to enter details  using structures
*/




#include<stdio.h>
#include<string.h>
 struct student{
	 char name [10];
	 char email[10];
	 char reg_no[10];
	 int phone ;
	 int Id_no;
	 float marks;
	 float height;
	 }student1, student2;
	 
	 
	 int main (){
		 printf("enter your name:");
		 scanf("%s\n",&student1.name);
		  printf("your name is :%s\n",student1.name);
		  
		 printf("enter your email:");
		 scanf("%s\n",&student1.email);
		  printf("your email  is :%s\n",student1.email);
		  
		 printf("enter your reg no:");
		 scanf("%s\n",&student1.reg_no);
		 printf("your reg no is :%s\n",student1.reg_no);
		 
		 printf("enter your phone:");
		 scanf("%d\n",&student1.phone);
		  printf("your phone is :%d\n",student1.phone);
		  
		  
		 printf("enter your id no:");
		 scanf("%d\n",&student1.Id_no);
		  printf("your id_NO is :%d\n",student1.Id_no);
		 
		 printf("enter your marks:");
		 scanf("%f\n",&student1.marks);
		  printf("your marks is :%f\n",student1.marks);
		 
		 printf("enter your height:");
		 scanf("%f\n",&student1.height);
		  printf("your height is :%f\n",student1.height);
		 
		 
		 /*
		 
		 printf("name:%s\n",student1.name);
		 printf ("email:%s\n",student1.email);
		 printf("reg_no:%d\n",student1.reg_no);
		 printf("id no:%d\n",student1.Id_no);
		 printf("phone no:%d\n",student1.phone);
		 printf("height:%f\n",student1.height);
		 printf("marks:%d/n",student1.marks);
		 return 0;
		 */
	 }