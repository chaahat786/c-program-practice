#include<stdio.h>
#include<stdlib.h>

int main()
{
    int choice,a,b,s;   
	while(1) 
	{
    printf("\n1. Addition");
    printf("\n2. Odd-Even");
    printf("\n3. Printing N numbers");
    printf("\n4.  Exit");
    printf("\n\nEnter your choice");
   
	 scanf("%d",&choice);
	 switch(choice)
	{
	case 1:
		    printf("Enter two numbers");
		    scanf("%d%d",&a,&b);
		    s=a+b;
		    printf("\nsum is %d",s);
		    break;
    case 2:	   
	          printf("Enter a number");
			  if(a%2==0)
			         printf("Even number");
			  else
			         printf("Odd number");
			  break;
	case 3:
		      printf("Enter a number");
			  scanf("%d",&a);
			  for(b=1;b<=a;b++)
			           printf("%d",b);
			  break;
	case 4: exit(0);

	  default: continue;

}
	}
	}




