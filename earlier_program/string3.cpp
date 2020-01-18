#include<stdio.h>
int main()
{
	char s[3][10];
	int i;
	printf("Enter three strings");
	for(i=0;i<=2;i++)     // chuki row three h esliye 0,1,2 esliye i=2 likhe h qki row name 2 hi tak hoga 
	gets(&s[i][0]);      //or gets(s[i])
	
	for(i=0;i<=2;i++)     // chuki row three h esliye 0,1,2 esliye i=2 likhe h qki row name 2 hi tak hoga 
    printf("%s\n",s[i]);    // %s chacrater mtlab alphabet ko print krne ke liye h 
    
    return 0;
}
