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

int Factorial(int iNo) {
    int iCnt, iFact = 1;
    if (iNo<0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++) {
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

    iRet = Factorial(iValue);

    printf(" Factoria of number is %d", iRet);
    return 0;

}