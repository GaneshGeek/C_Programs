#include <stdio.h>
#include <stdlib.h>
void main()
{
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    /*if (ch==97 || ch==101|| ch==105|| ch==111|| ch==117)
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("%c is consonant",ch);
    }*/
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
                  printf("%c is vowel",ch);
                  break;
        default:printf("%c is consonant",ch);
                break;

    }
}