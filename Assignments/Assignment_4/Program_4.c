#include <stdio.h>


int SumNonFact(int iNo) {
    int i, sum = 0;

   
    for (i = iNo - 1; i >= 1; i--) {
        if (iNo % i != 0) {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    return sum; 
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

