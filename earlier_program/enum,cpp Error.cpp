#include<stdio.h>
enum boolean
{
	false,true
};
enum boolean isEven(int x)
{
	if(x%2==0)
	return(true);
	else
	return(false);
}
int main()
{
int n;
enum boolean result;
printf("Enter a number");
scanf("%d",&n);
result=isEven(n);
if(result==true)
printf("Even number");
else
printf("Odd number");

return 0;
}
}
