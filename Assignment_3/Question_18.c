#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number");
    scanf("%d",&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
      {
         printf("31 days in %dnd month",month);
      }
   else if(month==2)
         {
           printf("28 or 29 days in %dnd month",month);
         }
   else if(month<12)
         {
           printf("30 days in %dnd month",month);
         }
        else
           printf("Invalid month number");
  return 0;
}
