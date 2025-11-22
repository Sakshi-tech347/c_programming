// ip    :  8
// op    :  2  4  6  8  10  12  14  16
// index:   1  2  3  4   5   6   7   8


#include<stdio.h>
void Pattern( int iNo)
{
    int iCnt = 0 ,imult = 1;
    
    for(iCnt = 1 ; iCnt <= iNo ;iCnt++)
    
    {
      imult = 2* iCnt;
      printf("%d\t",imult);  
    }
  
    
       
    
}
int main()
{
    int iValue =0;
    printf("Enter number of Elements:");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}