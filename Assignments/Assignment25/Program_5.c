#include<stdio.h>
#include<stdlib.h>


void Display(int Arr [], int iSize)
{
    int iCnt =0;
    printf("element is multiple of 11\n");
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if( (Arr[iCnt]) % 11 == 0)
        {
         printf(" %d \n",Arr[iCnt] );
            
        }
       
        
    }
  
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

   Display(iptr , iSize);

   

    free(iptr) ;



    return 0;
}
