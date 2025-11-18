#include<stdio.h>
#include<stdlib.h>


int Product(int Arr [], int iSize)
{
    int iCnt =0 , Product =1;
  
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
         
            Product = Product *Arr[iCnt] ;
        }
        
    }
   return Product;
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

    iRet= Product(iptr , iSize);

    printf(" product of odd element is :%d", iRet);

    free(iptr) ;



    return 0;
}
