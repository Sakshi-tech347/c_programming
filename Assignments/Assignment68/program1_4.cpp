#include<iostream>
using namespace std;

void Display( )
{
    static char  c = 'A';
   
    if(c <= 'F' )
    {
        cout<<c<<"\t";
        c++;
        Display();
    }
 
}

int main()
{
     
     Display();

    return 0;
}

