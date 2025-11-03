/*#include<stdio.h>


void RangeDisplay(int iStart,int iEnd)
{
    
    for(int i = iStart ; i<=iEnd; i++)
    {
        printf("%d ",i);
    }
}

int main()

{
    int iValue1 = 0;
    int iValue2 =0;

    printf("enter Starting point : ");
    scanf("%d ",&iValue1 );

    printf("enter Ending  point : ");
    scanf("%d ",&iValue2 );

    RangeDisplay(iValue1,iValue2);



    return 0;
} */

#include <stdio.h>

void RangeDisplay(int iValue1, int iValue2)
{       int i =0;

    if(iValue1 > iValue2)
    {
        printf("invalid input");
    }


      for (i = iValue1; i <= iValue2; i++) 
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
