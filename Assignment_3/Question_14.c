#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%7==0&&x%3==0)
      {
        printf("Number is divisible by 7 and by 3 also");
      }
   else if(x%7==0)
      {
        printf("Number is divisible by 7");
      }
    else if(x%3==0)
          {
            printf("Number is divisible by 3");
          }
          else
            printf("Neither number is divisible by 7 not 3");
  return 0;
}
