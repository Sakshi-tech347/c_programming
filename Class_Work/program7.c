
/*
  Step 1: Understand The Problem Statement
  Step 2: Write the algorithm
  Step 3: Decide the programming language
  Step 4: Write the program
  Step 5:Test the program

*/

/*
    Alogorithm

    Start

        Accept first number as no1
        Accept Second number as no2
        If input is negative then convert it into positive
        Perform adddition of no1 & no2
        Display the addition on screen

    Stop

*/



#include<stdio.h>

int AddionTwoNumbers(int iNo1,int iNo2)
{
  int iSum =0;
  iSum =iNo1+iNo2;     ///Business logic
  return iSum;
}



int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("enter first no: \n");
    scanf("%d",&iValue1);

    printf("enter Second no: \n");
    scanf("%d",&iValue2);
    
    iRet = AddionTwoNumbers(iValue1,iValue2);

    printf(" Addition is %d\n",iRet);


    return 0;
}