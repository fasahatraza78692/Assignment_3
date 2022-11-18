#include<stdio.h>
int main()
{
	int a,b,c,D;
	printf("Enter the coifficient of x^2,x and constant\n");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D<0)
		printf("Both roots are imaginary\n");
	else if(D==0)
		printf("Both roots are real and equal\n");
	     else
		printf("Roots are real and distinct\n");
return 0;
}
