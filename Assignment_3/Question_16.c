#include<stdio.h>
int main()
{
   char c;
    printf("Enter a character\n");
    scanf("%c",&c);
    if(c>=65&&c<=90)
        printf("Alphabet in uppercase");
    else if(c>=97&&c<=122)
            printf("Alphabet in lowercase");
    else if(c>='0'&&c<='9')
            printf("Character is a digit");
        else
            printf("A special character");
   return 0;
}
