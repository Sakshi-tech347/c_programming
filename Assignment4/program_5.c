#include <stdio.h>


int SumNonFact(int iNo) {
    int iFact, iNonf ,  iDiff = 0;

   
    for (iFact = iNo - 1; iFact >= 1; iFact--) {
        if (iNo % iFact != 0) {
            printf("%d ", iFact);
            
        }
        else
        {
             printf("%d",iNonf );
            iDiff = iNonf - iFact;        
        }
    }

    return iDiff; 
}

int main() {
    int iValue =0 ;
    int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);  

    printf("\nSum of Non factors = %d\n", iRet);

    return 0;
}

