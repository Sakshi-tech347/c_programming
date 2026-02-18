#include<iostream>
using namespace std;

int Sum(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iDigit + iSum ;
        iNo = iNo / 10;
        Sum(iNo);
    }

    return iSum;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number :\n";

    cin>>iValue;
    iRet = Sum(iValue);

    cout<<iRet;



    return 0;
}