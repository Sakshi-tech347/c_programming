#include<iostream>
using namespace std;

int Small( char  *str)
{
    int iCount = 0;
    int i = 0;

    for(i = 0 ; i < *str != '\0'; i++)
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }
            str++;

    }

    return iCount;
}


int main()
{
    int iRet = 0;
    char Arr [20] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);

    iRet =  Small(Arr);
    printf("Length of small charector is : %d",iRet);



    return 0;
}

/*
Enter String :
HElloWorLD
Length of small charector is : 5
*/