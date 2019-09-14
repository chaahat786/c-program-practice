/* takes something Returns Nothing */
#include<stdio.h>

void add(int,int); /* return nothing h esliye void likhe h and parenthes mtlab bracket me liikhe h ve take somthing h esliye : yha pr ye likhna global declaration kahlata h function 
se ye bahar ye likha h esliye pure programe me koe v function es add function ka use kr skta h */
int main()

{

	int x,y;
	printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    add(x,y); /* Actualy Arguments : call by value*/
}
 void add(int a,int b) /* formal Arguments */
{
	int c;
    c=a+b;
    printf("Sum is %d",c);

}
