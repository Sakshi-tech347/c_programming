#include<iostream>
using namespace std;

int Factorial( int iNo)
{ 
    static int i = 1;
    static int iFact = 1;
    //i = 1 ;
    if ( i<= iNo)
    {
        iFact = iFact * i;
        i++;
        Factorial(iNo);
    }
    return iFact;
}


int main()
{
    int iRet = 0;
    int iValue = 0;
    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = Factorial(iValue);

    printf("factorial is : %d ", iRet);


    return 0;
}

/*
Enter Number : 5
factorial is : 120

*/