#include<stdio.h>

void FactRev(int iNo)
{

    int i =0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i =iNo -1; i>=1; i--)
    {
        if(iNo%i == 0)
        {
            printf("%d \t",i);
        }
        
    }

}

int main()
{

    int iValue = 0;

    printf("enter value :");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
