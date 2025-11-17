#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
        {
            int iCnt =0; 
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if( Arr[iCnt] == 11)
                {
                     return true;
                }
                else
                {
                     return false;
                }
               
              
            }
          
        }
int main()
{
    int iLength=0,iCnt =0 ;
    int *p = NULL;
    bool  bRet= false;

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

    bRet= Check(p, iLength);

    if(bRet == true)
    {
        printf(" 11 is present ");
    }
    else
    {
        printf(" 11 is not present ");
    }
    

    free (p);

    return 0;


}
