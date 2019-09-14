#include<stdio.h>
int main()
{
	char s[20];
	int i;
	printf("Enter your name");
	gets(s); //eske use se hm space ke bad vala v input ko print kra sakte h but esme enter ke bad ka print nhi hoga
//	scanf("%s",s);  eske use se jab hm run krenge aur usme space dekr jo v input krenge ve print nhi hoga   //s=exmple ke liye 1000 =&s[0]
	puts(&s[0]);
}
	
