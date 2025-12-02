///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//    Function Name : count number of capital charector
//    Desciption :    It is used to perform count the occurence
//    Input :         string
//    Output :        int 
//    Auther :        Sakshi  Laxman Kachate
//    Date :          30/11/2025
//
/////////////////////////////////////////////////////////////////////
int CountCapital(char str[])
{
    int iCnt =0;

  

    while (*str != '\0')
    {
        if ( *str >=('A') && *str <= ('Z'))
        {
           iCnt ++; 
        }
          str++;
    }

    return iCnt ;
    }


///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application
//
///////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    int iRet =0;

    printf("enter string\n");
    scanf("%[^'\n']s",Arr);

    iRet =CountCapital(Arr);
    printf("count of capital %d",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "MArvellous Multi OS"         Output :4
//   
//
//
///////////////////////////////////////////////////////////////////
