

#include <stdio.h>

void RangeDisplay(int iValue1, int iValue2)
{       int i =0;

    if(iValue1 > iValue2)
    {
        printf("invalid input");
    }


      for (i = iValue2; i >= iValue1; i--) 
      {
        printf("%d ", i);
      }

      
}




int main()
{
    int iStart, iEnd, i;

    printf("Enter start number: ");
    scanf("%d", &iStart);

    printf("Enter end number: ");
    scanf("%d", &iEnd);

    RangeDisplay(iStart,iEnd);

    //printf("Numbers from %d to %d are:\n", iStart, iEnd);

  

    return 0;
}
