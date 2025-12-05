///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//    Function Name : count number of small charector
//    Desciption :    It is used display small charetor instring
//    Input :         string
//    Output :        int 
//    Auther :        Sakshi  Laxman Kachate
//    Date :          01/12/2025
//
/////////////////////////////////////////////////////////////////////
int CountSmall(char str[])
{
    int iCnt =0;

  

    while (*str != '\0')
    {
        if ( *str >=('a') && *str <= ('z'))
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

    iRet =CountSmall(Arr);
    printf("count of small %d",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Marvellous "         Output :9
//   
//
//
///////////////////////////////////////////////////////////////////