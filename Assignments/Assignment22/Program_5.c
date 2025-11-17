#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iSize , int iNo)
        {
            int iCnt =0, iCountNo =0;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if( Arr[iCnt] == iNo)
                {
                    iCountNo++;
                }    
    
            }
          return iCountNo;
        }
int main()
{
    int iLength=0,iCnt =0 , iRet =0,   iNo =0; 
    int *p = NULL;
   
    printf("Enter N: ");
    scanf("%d",&iLength);

    printf("Enter No ");
    scanf("%d",&iNo);

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

    iRet = Frequency(p, iLength , iNo);

    
   
        printf(" Frequency of %d is %d " , iNo, iRet);
 
    

    free (p);

    return 0;


}
