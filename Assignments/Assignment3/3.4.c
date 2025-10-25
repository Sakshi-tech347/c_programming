#include <stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue<= 'z')
    {
        CValue =  CValue -32;

        printf(" %c  \n", CValue);

    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        CValue = CValue +32;
        printf(" %c \n ", CValue);
    }
}

int main()
{
    char cValue = '\0';
    printf ("enter Charector:");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0 ;
}