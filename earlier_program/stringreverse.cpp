//Function to reverse a string
#include<stdio.h>
char* reverse(char*);
int main()
{

	printf("%s",reverse("Computer"));
}
char* reverse(char *p)
{
	int l,i;
	char ch;
	for(l=0;*(p+l)!='\0';l++);
	for(i=0;i<l/2;i++)         //swaping krne ke liye 1/2 kiye h  computer ko reverse krne ke liye retupmoc   
{
     ch=*(p+l);
   	*(p+i)=*(p+l-1-i);
    *(p+l-1-i)=ch;
}
    return(p);
}
//Error

