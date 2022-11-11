#include<stdio.h>
int main()
{
    int E,H,M,S,A;
    printf("Enter the marks of English\n");
    scanf("%d",&E);
    printf("Enter the marks of Hindi\n");
    scanf("%d",&H);
    printf("Enter the marks of Maths\n");
    scanf("%d",&M);
    printf("Enter the marks of Science\n");
    scanf("%d",&S);
    printf("Enter the marks of Art\n");
    scanf("%d",&A);
    if(E>=33&&H>=33&&M>=33&&S>=33&&A>=33)
       {
         printf("Student passed");
       }
    else
       {
         printf("Student failed");
       }
   return 0;
}
