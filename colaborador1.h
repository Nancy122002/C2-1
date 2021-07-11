#include<stdio.h>
#include<stdlib.h>
main (){
	int m1[5][5],m2[5][5],m3[5][5],i,j,potencia;
	
	printf("primer matriz [2x3]");
	 for(i=1;i<=2;i++)//fila
    	for(j=1;j<=3;j++)//columas

	{
		printf(" \n introducir valor de [%d][%d]:",i,j);
		scanf(" %d ",&m1[i][j]);
		
	}
	system("cls");
	printf("\n");
	printf("segunda matriz [3x3]");
		for(i=1;i<=3;i++)//fila
        	for(j=1;j<=3;j++)//columas
	{
		printf("\n introducir el valor de [%d][%d]:",i,j);
		scanf(" %d ",&m2[i][j]);
	}

