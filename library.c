// program to calculate fine for overdues library books.
/*
program to calculate fine for overdues library books.
Author:Daniel Gitari.
Reg NO: CT101/G/21346/24.
Date: 30/9/2024.
*/
#include <stdio.h>

int main(){
	
	int book_ID;
	int due_date;
	int return_date;
	int overdue_date;
	int fine_amount;
	int fine_rate;
	
	printf("Enter the book_ID:");
	scanf("%d\n",&book_ID);
	
	printf("Enter ths due_date:");
	scanf("%d\n",&due_date);
	
	printf("Enter the return_date:");
	scanf("%d\n",&return_date);
	
	overdue_date= return_date - due_date;

	if (overdue_date<=7){
		printf("fine_rate is 20 ksh:");}
		
		else if(overdue_date>=7 && overdue_date<=14){
			printf("fine_rate is 50");
		}
		else if(overdue_date>=15){
			printf("fine_rate is 100");
		}
     fine_amount=overdue_date * fine_rate;
     
     printf("book_ID:%d\n",book_ID);
     printf("due_date:%d\n",due_date);
     printf("return_date:%d\n",return_date);
     printf("overdue_date:%d\n",overdue_date);
     printf("fine_amount:%d\n",fine_amount);
     printf("fine_rate:%d\n",fine_rate);
     
     return 0;
     
}
