#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
     {
       if(a>c)
        printf("Greater is %d",a);
       else
        printf("Greater is %d",c);
     }
    else
     {
       if(b>c)
         printf("Greater is %d",b);
       else
         printf("Greater is %d",c);
     }
   return 0;
}
