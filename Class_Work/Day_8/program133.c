#include<stdio.h>
#include<stdlib.h>
int main()
{
    int iLength =0 ,iCnt =0;
    int *iptr =NULL;

    printf("enter the number of elements \n");
    scanf("%d",&iLength);

    //Allocate the memory
    iptr = (int *)malloc(iLength * sizeof(int));
    if (NULL == iptr)
    {
        printf("Unable to allocate the maemory");
        return -1;
    }

    printf("Enter the values : ");

    for(iCnt =0 ; iCnt < iLength ; iCnt ++)
    {
        scanf("%d",&iptr[iCnt]);
    }

    //step 2 use the memory
    //Call to the functionwhich contains business logic
    // Fun(iptr , iLength);


    //Step 3 : Free the memory 
    free(iptr);

    return 0;
}
