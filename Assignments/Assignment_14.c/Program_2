 

#include <stdio.h>
#include <stdbool.h>   


bool ChckZero(int n)
{
    int iDigit;

    if (n == 0)
        return true;  

    if (n < 0)
        n = -n;  

    while (n > 0) {
        iDigit = n % 10;
        if (iDigit == 0)
            return true;   
        n = n / 10;
    }

    return false; 
}


int main() {
     int iValue =0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    if (ChckZero(iValue))
        printf("The number %d contains zero.\n", iValue);
    else
        printf("The number %d does not contain zero.\n", iValue);

    return 0;
}


