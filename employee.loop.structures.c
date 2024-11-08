#include<stdio.h>
#include<string.h>
 
 struct employee{
	 int Id;
	 char name [20];
	 float salary;
	  }employee1;
 
 int main (){
	 int i;
	 for(i=0;i<3;i++){
		 
		 printf("Enter the your ID NO ");
		 scanf("%d\n",&employee1.Id);
		 printf("your id no is %d\n",employee1.Id);
		 
		 
		 printf("Enter Your name ");
		 scanf("%s
		 \n",&employee1.name);
		  printf("your Name no is %s\n",employee1.name);
		 
		 
		 
		 
		 printf("Enter Your salary ");
		 scanf("%f\n",&employee1.salary);
		  printf("your id no is %f",employee1.salary);
		 
	 }
	 return 0;
 }