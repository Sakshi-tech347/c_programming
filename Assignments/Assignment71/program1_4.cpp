#include<iostream>
using namespace std;

int Min(int iNo)
{
    static int iDigit = 0;
    static int iMin = 0;

    if (iNo != 0)
    {

        iDigit = iNo % 10;
        iMin = iDigit;
        if(iMin > iDigit)
        {
            iMin = iDigit;

        }
        iNo = iNo / 10;
        Min(iNo);


    } 

return iMin;



}
 


int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number :\n";

    cin>>iValue;
    iRet = Min(iValue);

    cout<<iRet;



    return 0;
}

/*
Enter Number :
2563
2



*/