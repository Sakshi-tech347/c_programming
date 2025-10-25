#include<stdio.h>

#define Bool
#define TRUE 1
#define FALSE 0

Bool ChkVowel(char cNo)
{
    if(cNo =='a'||'e'||'i'||'o'||'u' ,
        cNo==  'A'||'E'||'I'||'O'||'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()

{
    char cValue = '\0';
    Bool bRet = FALSE;

    printf("enter charector:");
    scanf("%d",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet== TRUE)
    {
        printf("its vowel");
    }
    else 
    {
        printf("its not vowel");
    }

    return 0;
}