#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize)
        {
            int iCnt =0, iCount =0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if( Arr[iCnt] == 11)
                {
                    iCount++;
                }    
    
            }
          return iCount;
        }
int main()
{
    int iLength=0,iCnt =0 , iRet =0;
    int *p = NULL;
   

    printf("Enter number of elements: ");
    scanf("%d",&iLength);

    p =(int *)malloc(iLength * sizeof(int) );

    if (p== NULL)
    {
        printf("Unable to Allocate the memory");
        return -1;

    }
    printf("Enter  elements :");

    for (iCnt = 0; iCnt < iLength ;iCnt++)
    {
       
        scanf("%d",&p[iCnt]);

    }

    iRet = Frequency(p, iLength);

    
   
        printf(" Frequency of 11 is %d " , iRet);
 
    

    free (p);

    return 0;


}
