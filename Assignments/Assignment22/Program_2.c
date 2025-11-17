#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
        {
           int iCnt =0, iCountEven =0 , iCountOdd =0;

           for(iCnt = 0; iCnt< iSize ; iCnt++)
           
           {
            if(Arr[iCnt] % 2 == 0)
            {
                iCountEven ++;
            }
            else
            {
                iCountOdd++;
            }

           }

           return iCountEven- iCountOdd;
        }
int main()
{
    int iLength=0, iRet= 0,iCnt =0 ;
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

    iRet= Frequency(p, iLength);
    printf("Result is %d", iRet);

    free (p);

    return 0;


}
