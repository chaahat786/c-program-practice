#include<stdio.h>
union item
{
	int x; float y; char z;
	
};
int main()
{
	union item i1;
	i1.x=5;
	printf("\nx=%d",i1.x);
	i1.y=3.5;
	printf("\ny=%d",i1.y);
	i1.z='a';
	printf("\nz=%d",i1.z);
	
}

// z ki value a print nhi ho rha h 
