// hume book ka information rkhna h
#include<stdio.h>
struct book  // book hamara data type h
{
	int bookid;
	char title[20];  // size h 20 title ka
	float price;
};
struct book input()    // input function book tpye ki hi value return krega esliye yaha return type book likhe h
{
	struct book b;
	printf("Enter bookid,title and prince");
	scanf("%d",&b.bookid);
	fflush(stdin);        // ye likhne pr gets work krega 
	gets(b.title);
	scanf("%d",&b.price);
	return(b);
}
void display(struct book b)
{
	printf("\n %d %s %f",b.bookid,b.title,b.price);
}
int main()        // yha void main() use kiya h viedo me 
{
	struct book b1;
	b1=input();
	display(b1);
	return(0);
}


