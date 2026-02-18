#include<iostream>
using namespace std;

void Display( )
{
    static char  c = 'a';
   
    if(c <= 'f' )
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

