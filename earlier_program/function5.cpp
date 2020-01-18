/* takes something Returns Something */
#include<stdio.h>

int add(int,int); /* return nothing h esliye void likhe h and parenthes mtlab bracket me liikhe h ve take somthing h esliye : yha pr ye likhna global declaration kahlata h function 
se ye bahar ye likha h esliye pure programe me koe v function es add function ka use kr skta h */
int main()

{

	int s,x,y;
	printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=add(x,y);                  /* Actualy Arguments : call by value*/
       printf("Sum is %d",s);
}
 int add(int a,int b)               /* formal Arguments */
{
	int c;
    c=a+b;
 return (c);

}
