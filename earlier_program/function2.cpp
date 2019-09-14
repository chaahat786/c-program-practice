/* takes Returns Nothing */
#include<conio.h>
#include<stdio.h> /* ye clear screen ka declaration h but esme ye support nhi kr rha esliye ese hta v skte h   clrscr(); eska hi declration h */
int main()

{
	void add(void);  /* void ka mtlab ki ye function kuchh v retrun nhi krega */
	 add();
}
 
 void add()

{
	int a,b,c;
	printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);

}
