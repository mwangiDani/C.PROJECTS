// program to prompt user to enter details books using structures
/*
Name:Mwangi Daniel Gitari
Reg No:CT101/G/21346/24
Date:19/10/2024
program to prompt user to enter details books using structures
*/





#include<stdio.h>
#include<string.h>


struct student{
	char title[30];
	char author[30];
	 int publication;
	 char ISBN[30];
	 float price;
	 
}student1;
	 int main(){
/*
	 	strcpy(student1.title,"daniel");
	 	strcpy(student1.author,"CHARITY");
	 	strcpy(student1.ISBN,"900000");
	 	student1.publication=30000;
	 	student1.price=500;
	 	*/

 printf("Enter the title name:");
 scanf("%s\n",&student1.title);
 	printf("title:%s\n",student1.title);
 	
  printf("Enter the author:");
 scanf("%s\n",&student1.author);
 printf("Auothor:%s\n",student1.author);
 
  printf("Enter the ISBN:");
 scanf("%s\n",&student1.ISBN);
 	printf("ISBN:%s\n",student1.ISBN);
 	
  printf("Enter the publication:");
 scanf("%d\n",&student1.title);
 printf("Publication:%d\n",student1.publication);
 
  printf("Enter the price:");
 scanf("%f\n",&student1.price);
 	printf("Price:%.2f\n",student1.price);
 
	 	/*
	 	printf("title:%s\n",student1.title);
	 	printf("Auothor:%s\n",student1.author);
	 	printf("ISBN:%s\n",student1.ISBN);
	 	printf("Publication:%d\n",student1.publication);
	 	printf("Price:%.2f\n",student1.price);
		 */
		 
		 return 0;
	 }
	 
	 
