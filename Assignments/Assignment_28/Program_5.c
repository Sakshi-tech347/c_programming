#include<stdio.h>
#include<stdlib.h>


int DigitSum(int Arr [], int iSize)
{
    int iCnt =0 ;
     int iDigit =0;
   
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
       int  iSum = 0; int num = Arr[iCnt];
        while ( num > 0)
        {
        iDigit = num% 10;
        iSum += iDigit ;
        num = num /10;



        }
       
       printf("%d \n", iSum);   
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

    DigitSum(iptr , iSize);

    

    free(iptr) ;



    return 0;
}