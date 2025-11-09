#include <stdio.h>

int CountDiff( int iNo)
{
    int iDigit =0;
    int iSumEven =0;
    int iSumOdd =0;
    int iTotal =0;



  while (iNo != 0) {
        iDigit = iNo% 10;   
        printf("%d ",iDigit);
        if(iDigit%2 ==0)
        {
            iSumEven= iSumEven + iDigit;
        }
        if(iDigit%2 != 0)
        {
            iSumOdd= iSumOdd + iDigit;
        }
        
  
        iTotal = iSumEven - iSumOdd;  
        iNo = iNo / 10;   
    }



return iTotal;
}



int main() {
    int iValue, digit, iRet =0;
    //int mul = 1;  // To store multiplication result

    printf("Enter a number: ");
    scanf("%d", &iValue);

    //printf("Digits: ");

    iRet = CountDiff(iValue);

    printf(" %d", iRet);
}
