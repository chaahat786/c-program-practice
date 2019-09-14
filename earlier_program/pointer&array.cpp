#include<stdio.h>
void input(int *p)      //*p = poniter variable h 
{
	int i;
	for(i=0;i<=4;i++)
	scanf("%d",p+i);                            // p+1 = address of p + 4 bytes (ineger)
	
}
void display(int *p)   // ye array ki value ko print krega               display=print
{
	int i;
	for(i=0;i<=4;i++)
	printf("%d",*(p+i));
}
void sort(int *p)
{
	int round,t,i;
	for(round=1;round<=4;round++)
	{
		for(i=0;i<=3;i++)
	if(*(p+i)>*(p+i+1))
	{
	t=*(p+i);  // a[i]=*(p+i)
	*(p+i)=*(p+i+1);
	*(p+i+1)=t;
}
}
}
int main()
{
	int a[5];
	input(a);  // a= address of array esliye pass by refrence
	display(a);
	sort(a);
	display(a);
}

