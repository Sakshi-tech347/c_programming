#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr [], int iSize)
{
    int iCnt =0 , iSumEven = 0; int iSumOdd =0;
  
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
         
            iSumEven = iSumEven  +Arr[iCnt] ;
        }
        if (Arr[iCnt] %2 != 0)
        {
             iSumOdd = iSumOdd  +Arr[iCnt] ;
        }
        
    }
   return iSumEven -iSumOdd  ;
}

int main()
{
    int iCnt =0 , iSize =0 ,iRet =0;
    int * iptr = NULL;
  

    printf("Enter number of Elements:");
    scanf("%d", & iSize);



    iptr = (int *) malloc (iSize * sizeof(int));
    if ( iptr == NULL)

    {
        printf ("unable to allocate the memory");
        return -1;
    }
    
    printf("Enter the Elements\n");

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);

    }

    iRet= Difference(iptr , iSize);

    printf(" difference of even and odd number  is :%d", iRet);

    free(iptr) ;



    return 0;
}
