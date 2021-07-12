void producto(float (*m1)[5], float (*m2)[5], float (*r)[5])
{

cout<<"Obetener el producto de las dos matrices ";




}
system("cls");
printf("\n PRODUCTO DE MATRIZ\n");
for(i=1;i<=2;i++)//fila
for(j=1;j<=3;j++)//columas
m3[i][j]=(m1[i][1]*m2[1][j])+(m1[i][2]*m2[2][j])+(m1[i][3]*m2[3][j]);

for(i=1;i<=2;i++)//fila
{
for(j=1;j<=3;j++)//columnas
    printf(" %d ",m3[i][j]);
printf(" \n ");
 

}
