#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>0)
      {
        printf("Number is positive");
      }
    else if(x<0)
          {
            printf("Number is Negative");
          }
          else
            printf("Number is 0");
  return 0;
}
