#include<iostream>
using namespace std;

int Reverse(int iNo)
{
    static int iDigit = 0;
    static int iReverse = 0;
    if(iNo != 0)
    {   
        iDigit = iNo % 10;
        iReverse = (iReverse *10) + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);

    }
     
   return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter Number :\n";

    cin>>iValue;
    iRet =Reverse(iValue);

    cout<<iRet;



    return 0;
}

/*
Enter Number :
2563
2

*/

 