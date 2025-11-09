

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{       int i =0;
        int isum =0;


    if(iStart >  iEnd)
    {
        printf("invalid input");
    }


      for (i = iStart; i <=  iEnd; i++) 
      {
        
        printf("%d ", i);
        isum =isum + i;

      }

      return isum;
}




int main()
{
    int iValue1, iValue2;
    int iRet =0;
    

    printf("Enter start number: ");
    scanf("%d", &iValue1);

    printf("Enter end number: ");
    scanf("%d", &iValue2);

    iRet =RangeSum(iValue1,iValue2);

    //printf("Numbers from %d to %d are:\n", iValue1, iValue2);
    printf("summation of this is : %d",iRet);

  

    return 0;
}
