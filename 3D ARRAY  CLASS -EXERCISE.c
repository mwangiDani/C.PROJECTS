/*
Name:Mwangi Daniel Gitari
Reg NO: CT101/G/21346/24
Date:8/11/2024
*/




#include<stdio.h>

int main (){
	
	int i,j,k;
	int scores[2][2][3]={{{33,45,84},{52,98,76}},{{10,35,80},{12,60,42}}};

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<3;k++){	
			printf("scores[%d][%d][%d]=%d\n",i,j,k,scores[i][j][k]);

		}
	}
}
	
	return 0;
}