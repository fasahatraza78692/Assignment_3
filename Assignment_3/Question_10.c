#include<stdio.h>
int main()
{
    float cp,sp,ppr,lpr;
    printf("Enter the cost price\n");
    scanf("%f",&cp);
    printf("Enter the selling price\n");
    scanf("%f",&sp);
    ppr=(sp-cp)/cp*100;
    lpr=(cp-sp)/cp*100;
    printf("Profit percentage %.2f%%\n",ppr);
    printf("Loss percentage %.2f%%\n",lpr);
  return 0;
}
