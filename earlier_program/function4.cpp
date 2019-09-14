/* takes Nothing Returns Something */
#include<stdio.h>

int add(void);
int main()

{

	int s;
	s=add();
    printf("Sum is %d",s);
}
int add()
{
int a,b,c;
	printf("Enter two numbers");
    scanf("%d%d",&a,&b);
       return (a+b);         /* ab return ke bad kuchh v likhte h to uska value nhi dega qki return ke bad control direct s=add pr chel jyega */
      	printf("hello");
}
/* Error */
