
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(a+c)>b)
      {
        printf("Triangle is valid");
      }
    else
      { 
        printf("Triangle is not valid");
      }
  return 0;
}
