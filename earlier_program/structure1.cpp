#include<stdio.h>
struct date 
{
	int d,m,y;
};
int main()
{
	struct date today,d1;     // yha date data type h and today and d1 variable h 
	 today.d=29;
	  today.m=8;
	   today.y=2019;
	   
	   d1=today;
	   printf("Enter today's date");
	   scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
	   printf("Date:%d/%d/%d",d1.d,d1.m,d1.y);          // ye vahi date print krega jo hm yha dale h 29/8/2019
  return(0);
}
