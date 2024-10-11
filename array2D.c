// c arrays -2d array
#include<stdio.h>
/*
Name:Mwangi Daniel Gitari
Reg NO: CT101/G/21346/24
Date:11/10/2024
*/
int main(){
	int i,j;
	int marks[2][3]={{40,50,60},{80,90,92}};
	for (i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("marks[%d][%d]=%d\n",i,j,marks[i][j]);
		}
	}
	return 0;
	
}