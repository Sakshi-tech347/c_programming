#include<iostream>
using namespace std;

int MultDigit(int iNo)
{
    static int  imult =1;
    static int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        imult = imult * iDigit;
        iNo = iNo / 10;

        MultDigit(iNo);

    }
     
     return imult;
}


int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number :\n";

    cin>>iValue;
    iRet = MultDigit(iValue);

    cout<<"Multiplication of Digits : "<<iRet;



    return 0;
}

/*
Enter Number :
523
Multiplication of Digits : 30


*/