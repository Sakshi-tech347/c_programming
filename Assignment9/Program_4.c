#include<stdio.h>



int OddFactorial(int iNo) {
    int iCnt, iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
         if (iNo<0)
        {
            iNo = -iNo;
        }
        if(iCnt % 2 != 0)
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter  number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf(" odd Factorial of number is %d", iRet);
    return 0;

}