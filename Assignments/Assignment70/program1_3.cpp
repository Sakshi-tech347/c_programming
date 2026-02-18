#include<iostream>
using namespace std;

int StrlenX( char  *str)
{
    static int iCount  = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        StrlenX(str);
    }

    return iCount;
}


int main()
{
    int iRet = 0;
    char Arr [20] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    iRet =  StrlenX(Arr);
    printf("Length of string is : %d",iRet);



    return 0;
}

/*
Enter String :
Hello
Length of string is : 5


*/