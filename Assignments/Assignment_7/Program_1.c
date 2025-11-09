#include<stdio.h>

void Number(int iNo)
{

 if(iNo <50 )
 printf("small");
 else if (iNo > 50 && iNo <100)
 printf("Medium");
 else 
 printf("Large");

} // time complexity : N

int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;

}
