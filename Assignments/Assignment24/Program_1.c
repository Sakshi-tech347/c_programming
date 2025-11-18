#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr [], int iSize)
{
    int iCnt =0 , iLarge =0;
  
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
       if (Arr[iCnt]> iLarge)
        {
         
            iLarge =  Arr[iCnt] ;
        }
        
    }
   return iLarge;
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

    iRet= Maximum(iptr , iSize);

    printf(" Largest number  is :%d", iRet);

    free(iptr) ;



    return 0;
}
