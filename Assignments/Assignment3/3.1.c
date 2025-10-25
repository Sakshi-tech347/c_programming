#include<stdio.h>

void PrintEven( int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= 2*(iNo) ; iCnt= iCnt+2)
    {
        printf("%d \t", iCnt);
    }
    
}

int main()
{
    int  iValue =0;

    printf("enter number :");
    scanf("%d \t", &iValue);

    PrintEven(iValue);
    return 0;
}