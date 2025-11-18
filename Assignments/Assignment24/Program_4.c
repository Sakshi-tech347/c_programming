#include<stdio.h>
#include<stdlib.h>


int Digit(int Arr [], int iSize)
{
    int iCnt =0 , iLarge =0;
   printf("Three Didit number is");
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
       
       if (Arr[iCnt] > 99 && Arr[iCnt] < 999)
        {
         
            printf(" %d", Arr[iCnt] );
        }
        
    }
  
}

int main()
{
    int iCnt =0 , iSize =0 ;
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

    Digit(iptr , iSize);

    

    free(iptr) ;



    return 0;
}
