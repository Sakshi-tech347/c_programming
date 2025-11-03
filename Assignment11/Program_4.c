

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{       int i =0;
        int isum =0, iRem =0;

    

      for (i = iStart; i <=  iEnd; i++) 
      {
        
    
         
      iRem = i%2 ==0;
      if(iRem)     
        
       {
        printf("%d ", i);
        isum = isum + i;
       } 

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
      if(iValue1 < 0 || iValue2 <0 || iValue1 >iValue2 )
              {
               printf("invalid input\n");
              }

    else iRet =RangeSumEven(iValue1,iValue2);

    //printf("Numbers from %d to %d are:\n", iValue1, iValue2);
    printf("summation of this is : %d",iRet);

  

    return 0;
}
