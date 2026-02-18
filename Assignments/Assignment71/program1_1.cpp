#include<iostream>
using namespace std;


int WhiteSpace( char str[])
{
    static int i = 0;
    static int iCount = 0;
    if(  str[i] != '\0' )
    {
        if(str[i] == ' ' || str[i] == '\t' || str[i] =='\n')
    
        {
            iCount++;
        }
        i++;
        WhiteSpace(str);
        
    }

    return iCount;
}
int main()
{
    char Arr [1024]= {"\0"};
    int iRet = 0;

    cout<<" Enter String :";
    //cin>>Arr;
    cin.getline(Arr,1024);
    iRet = WhiteSpace(Arr);
    cout<<"Count of WhiteSpaces is : "<<iRet;




    return 0;


}/*
     Enter String :He llo Wor ld
Count of WhiteSpaces is : 3



*/
