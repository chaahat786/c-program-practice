#include<stdio.h>
int main()
{
	int A[3][3],B[3][3],C[3][3],i,j;
	printf("Enter 9 numbers for first matrix");  /* 3*3=9 esliye total 9 variables ho jyenge */
	for(i=0;i<=2;i++)        /* variables 2 tak jyega qki 3 likhe h to 0,1,2 total 3 ho jyega  i=rows ke liye use h*/
    for(j=0;j<=2;j++)          /* variables 2 tak jyega qki 3 likhe h to 0,1,2 total 3 ho jyega  j=column ke liye use h*/
    scanf("%d",&A[i][j]);
   	printf("Enter 9 numbers for second matrix");
   	for(i=0;i<=2;i++)
    for(j=0;j<=2;j++) 
   scanf("%d",&B[i][j]);
   
   	for(i=0;i<=2;i++)
   	{
    for(j=0;j<=2;j++)
 {
 	C[i][j]=A[i][j]+B[i][j];
 	printf("%d",C[i][j]);
	}   
printf("\n");
}
}
