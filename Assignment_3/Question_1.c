#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number");
	scanf("%d",&x);
	if(x>=0)
	    printf("Number is positive");
	else if(x<0)
	    printf("Number is negative");
	return 0;
}
