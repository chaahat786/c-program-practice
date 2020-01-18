#include<stdio.h>
int main()
{
	char s[10]={"priya"};       /* ese hm es tarike se v likh skte h {'P','R','I','Y','A','\0'};  */ 
	int i;
/*	for(i=0;s[i]!='\0';i++)           jab pta nhi ki loop ko kitni bar chalana h to s[i]!='\0' ka use krenge
	printf("%c",s[i]);  */
   // printf("%s",s);    	/* %s ka mtlab pure string ko print krane ke liye h */ 
   puts(s); /* ye sirf string ko hi print krvata h  esme sirf array ka name likhe ex- (s) or aap hr jagah s ki jagah &s[0] v likh skte h*/
   return 0;
   
}
