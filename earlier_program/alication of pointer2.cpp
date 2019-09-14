#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("Enter Two Numbers");
	scanf("%d%d",&a,&b);
	swap(&a,&b);	                // a and b ki value ko interchange krne ke liye swap ka use kiye h
	printf("a=%d b=%d",a,b);	
}
void swap(int *x,int *y)  // *x=a & *y=b  
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
