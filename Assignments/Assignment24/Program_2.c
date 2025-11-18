#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr [], int iSize)
{
    int iCnt =0 , iSmall =Arr[0];
  
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
       if (Arr[iCnt] <iSmall)
        {
         
            iSmall=  Arr[iCnt] ;
        }
        
    }
   return iSmall;
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

    iRet= Minimum(iptr , iSize);

    printf(" Smallest number  is :%d", iRet);

    free(iptr) ;



    return 0;
}
