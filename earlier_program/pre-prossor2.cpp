// Defining micro like a function
#include<stdio.h>
#define SUM(a,b) a*b
int main()
{
printf("Sum of 3 and 4  is %d",SUM(3+4,4-6));  //a=3+4, b=4-6 ... 3+4*4-6...3+16-6..=5
}
/* if (a)*(b)
then 3+4=7
4-6=2
7*2=14 
*/
