// c arrays -3d array
#include<stdio.h>
/*
Name:Mwangi Daniel Gitari
Reg NO: CT101/G/21346/24
Date:11/10/2024
*/
int main(){
	int i,j,k;
	int marks[2][2][3]={{{40,50,60},{80,90,92}},{{40,50,60},{80,90,92}}
};
	for (i=0;i<2;i++){
		for(j=0;j<2;j++)
		{for(k=0;k<3;k++){
			printf("marks[%d][%d][%d]=%d\n",i,j,k,marks[i][j][k]);
		}
	}
	}
	return 0;
	
}