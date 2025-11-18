#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

typedef int BOOL;

BOOL Check(int Arr [], int iSize, int iNO )
{
    int iCnt =0;
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt] == iNO)
        {
            return 1;
        }
        else if(Arr[iCnt] != iNO)
        {
             return 0;
        }
           
        
    }

}

int main()
{
    int iCnt =0 , iN =0 , iNO =0;
    int * iptr ;
    BOOL bRet = 0 ;

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

    bRet =Check (iptr, iN , iNO);

    if (bRet == 1)
    {
        printf("%d Number is present ", iNO);
    }
    else
    {
        printf("%d Number is Absent ", iNO);  
    }
    free(iptr) ;



    return 0;
}
