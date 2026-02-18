#include<iostream>
using namespace std;

void Display()
{
    int  static i  = 5;
    if ( i > 0 )
    {
        cout<<i<<"\t";
        i-- ;
        Display();

    }
}

int main()
{
 
    Display();



    return 0;
}