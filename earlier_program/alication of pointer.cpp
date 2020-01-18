#include<stdio.h>
int main()
{
	int a,b,t;
	printf("Enter Two Numbers");
	scanf("%d%d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("a=%d b=%d",a,b);
}
