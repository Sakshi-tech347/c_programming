#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr [], int iSize, int iNO )
{
    int iCnt =0 , index =-1;
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt] == iNO)
        {
            index = iCnt ;
            
        }
        
    }
    return index;
}

int main()
{
    int iCnt =0 , iN =0 , iNO =0 , iRet =0;
    int * iptr = NULL; 
  

    printf("Enter number of Elements:");
    scanf("%d", & iN);

    printf("Enter number:");
    scanf("%d", & iNO);

    iptr = (int *) malloc (iN * sizeof(int));
    if ( iptr == NULL)

    {
        printf ("unable to allocate the memory");
        return -1;
    }
    
    printf("Enter the Elements\n");

    for(iCnt = 0 ; iCnt < iN ; iCnt++)
    {
        scanf("%d",&iptr[iCnt]);

    }

    iRet =LastOcc(iptr, iN , iNO);

    if (iRet == -1)
    {
        printf("There is no such number ");
    }
    else
    {
        printf("Last occurence of number  index is %d ", iRet);  
    }
    free(iptr) ;



    return 0;
}
