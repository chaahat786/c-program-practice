#include<stdio.h>
 //sizeof()
 main()
{
	int x,y,z;
	x=sizeof(34);     //ye integer h 
	y=sizeof(3.56);  //real constant double mane jate h  esliye y me value 8 bytes  hoga
	z=sizeof('a');  //ASCII
	printf("%d %d %d",x,y,z);	
}

