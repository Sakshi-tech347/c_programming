 #include<stdio.h>
#include<stdlib.h>


void Range(int Arr [], int iSize, int iNo1 , int iNo2 )
{
    int iCnt =0;
     printf("elements inbetween range \n");
    for(int iCnt =0 ; iCnt < iSize ; iCnt++)
    {
        if (Arr[iCnt] >= iNo1 && Arr[iCnt] <= iNo2)
        {
            printf("%d\n",Arr[iCnt]) ;
            
        }
        
    }
   
}

int main()
{
    int iCnt =0 , iSize =0 , iValue1=0 , iValue2 =0 ;
    int * iptr = NULL;
  

    printf("Enter number of Elements:");
    scanf("%d", & iSize);

    printf("Enter the Starting point :");
    scanf("%d", & iValue1);

     printf("Enter the Ending point :");
    scanf("%d", & iValue2);

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

    Range(iptr, iSize, iValue1 , iValue2);

    free(iptr) ;



    return 0;
}
