//=========================================
//INTEGRANTES:
//VALLECILLA NANCY 
//JAMA PATRICIA 
//ORTIZ EVELIN 
//=========================================
//========================================
//COLABORADOR NANCY VALLECILLA
//========================================
#include<stdio.h>
#include<stdlib.h>
main (){
	int m1[5][5],m2[5][5],m3[5][5],i,j;
	
	printf("primer matriz [2x3]");
	 for(i=1;i<=2;i++)
    	for(j=1;j<=3;j++)
	{
		printf(" \n introducir valor de [%d][%d]:",i,j);
		scanf("%d",&m1[i][j]);
	}
	system("cls");
	printf("segunda matriz [3x3]");
		for(i=1;i<=3;i++)
	for(j=1;j<=3;j++)
    	{
		printf("\n introducir el valor de [%d][%d]:",i,j);
		scanf(" %d ", &m2[i][j]);
		
	}
//========================================
// COLABORADOR 
//========================================
	
	
	
	
	
	
	
//===========================================
// COLABORADOR Jama Ramirez Patricia Pilar
//===========================================	
	
	}
	printf ("\n MATRIZ ORIGINAL \n  ");
	printf(" \n ");
	for(i=1;i<=2;i++);{
		for(j=1;j<=3;j++){
		printf(" %d ", m1[i][j]);
			printf(" \n ");
	}
	}
	printf("\n MATRIZ TRANSMPUESTA \n ");
	for( i=1;i<=2;i++){
		for( j=1;j<=3;j++){
			printf (" %d ", m1[j][i]);
			printf(" \n ");
		}
	}
	system("pause");
		
}
	
	
	
	
