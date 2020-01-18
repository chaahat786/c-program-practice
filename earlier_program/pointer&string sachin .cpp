// Your Program had two mistake- 1. you needed to store "Computer" in a variable, 2. You wrote ch=*(p+l); instead of ch=*(p+i);#include <iostream>
//Function to reverse a string
#include<stdio.h>
#include <iostream>
using namespace std;
char* reverse(char*);

int main()
 {
  char str1[] ="Comp";
  printf("%s",reverse(str1));

}

char* reverse(char *p)
{
int l,i;
char ch;
for(l=0;*(p+l)!='\0';l++);
for(i=0;i<l/2;i++)         //swaping krne ke liye 1/2 kiye h  computer ko reverse krne ke liye retupmoc   
{
     ch=*(p+i);
   	*(p+i)=*(p+l-1-i);
    *(p+l-1-i)=ch;
}

	cout<<"GfG!";
	return 0;
}

