#include <stdio.h>

int MultDigit( int iNo)
{
    int iDigit =0;
int iMult = 1;



  while (iNo != 0) {
        iDigit = iNo% 10;  
        printf("%d ",iDigit);
        if (iDigit == 0)
    {
        iDigit = iDigit + 1;
    }
        iMult = iMult * iDigit; 
        iNo = iNo / 10;     
    }



return iMult;
}


int main() {
    int iValue, digit, iRet =0;
    

    printf("Enter a number: ");
    scanf("%d", &iValue);

    //printf("Digits: ");

    iRet = MultDigit(iValue);


  

    printf(" %d", iRet);
}
