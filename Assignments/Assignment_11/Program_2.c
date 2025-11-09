

#include <stdio.h>

void DisplayEven(int iValue1, int iValue2)
{       int i =0;
        int iRem =0;

    if(iValue1 > iValue2)
    {
        printf("invalid input");
    }

    
      for (i = iValue1; i <= iValue2; i++) 
      {
        iRem= i%2 ==0;
        if(iRem)
        printf("%d ", i);
      }


int main()
{
    int iStart, iEnd, i;

    printf("Enter start number: ");
    scanf("%d", &iStart);

    printf("Enter end number: ");
    scanf("%d", &iEnd);

    DisplayEven(iStart,iEnd);

    //printf("Numbers from %d to %d are:\n", iStart, iEnd);

  

    return 0;
}
