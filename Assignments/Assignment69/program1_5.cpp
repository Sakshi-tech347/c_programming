#include<iostream>
using namespace std;

void Display( int iNo)
{
    static int  i = 0;
   
    if(i <iNo )
    {
        
        char Alphabet = 'a'+ i;
        cout<<Alphabet<<"\t";
        i++;
        Display(iNo);
    }
 
}

int main()
{
     int iValue = 0;
     cout<<"Enter  number :";
     cin>>iValue;

     Display(iValue);

    return 0;
}

