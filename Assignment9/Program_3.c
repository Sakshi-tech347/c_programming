#include<stdio.h>

/*int Factorial(int iNo)
{
    int iCnt =0;
    int iFact =0;
    for(iCnt =1 ; iCnt<=iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact ;
   
}*/

int EvenFactorial(int iNo) {
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
        if(iCnt % 2 == 0)
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

    iRet = EvenFactorial(iValue);

    printf(" Even Factorial of number is %d", iRet);
    return 0;

}