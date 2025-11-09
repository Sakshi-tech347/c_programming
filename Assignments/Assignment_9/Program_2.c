#include<stdio.h>

int DollerToINT(int iNo)
{
    float frate = 0;

    frate = 70;
    return  iNo * frate;  
}




int main()
{
    int iValue = 0;
    int iRet =0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = DollerToINT(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}
