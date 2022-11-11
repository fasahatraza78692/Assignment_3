#include<stdio.h>
int main()
{
   char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if(c>=65&&c<=90)
     {
        printf("Alphabet in uppercase");
     }
    else if(c>=97&&c<=122)
          {
            printf("Alphabet in lowercase");
          }
        else
          {
            printf("Character is not alphabet");
          }

   return 0;
}
