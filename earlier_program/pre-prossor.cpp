#include<stdio.h>
#define PI 3.14
int main()
{
	int r;
	float a;
	printf("Enter radius of a cricle");
	scanf("%d",&r);
	a=PI*r*r;
	printf("Area of circle is %f",a);
	return 0;
	
}
