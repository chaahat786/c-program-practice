#include<stdio.h>
int main()
{
	add();    	        //program me add code ka use ese function call kahte h
    isEven();
    add();
    add();	
}
add()              //ye add ka code ho gya ab hm sirf yhi likh kr program me add kr skte h hum pura block likhne ki jarurat nhi h
{
	int a,b,c;
	printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum is %d",c);
}
isEven()          // ye even ka code ho gya ab hm sirf yhi likh kr program me even ka pta kr skte h hume pura block likhne ki jarurat nhi h
 
{
	int a;
    printf("Enter a number");
    scanf("%d",&a);
    if(a%2==0)
    printf("Even");
    else
    printf("Odd");
}
