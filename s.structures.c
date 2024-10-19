// program  using structures
/*
Name:Mwangi Daniel Gitari
Reg No:CT101/G/21346/24
Date:19/10/2024
program  using structures
*/






#include<stdio.h>
#include<string.h>
 struct student{
	 char name [20];
	 char email[20];
	 char reg_no[20];
	 int phone ;
	 int Id_no;
	 float marks;
	 float height;
	 }student1, student2;
	 
	 
	 int main (){
		 strcpy (student1.name,"Daniel");
		 strcpy(student1.email,"gitaridaniel005@gmail.com");
		 strcpy(student1.reg_no,"CT101/G/21346/24");
		 student1.phone= 011307155;
		 student1.Id_no= 490032676;
		 student1.height= 6.5;
		 student1.marks = 90;
		 
		 
		 printf("name:%s\n",student1.name);
		 printf ("email:%s\n",student1.email);
		 printf("reg_no:%s\n",student1.reg_no);
		 printf("id no:%d\n",student1.Id_no);
		 printf("phone no:%d\n",student1.phone);
		 printf("height:%f\n",student1.height);
		 printf("marks:%f/n",student1.marks);
		 return 0;
		 
	 }