///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////
//
//    Function Name : count difference inbetween small &capital charector
//    Desciption :    It is used to perform count the occurence
//    Input :         string
//    Output :        int 
//    Auther :        Sakshi  Laxman Kachate
//    Date :          01/12/2025
//
/////////////////////////////////////////////////////////////////////
int Difference(char str[])
{
    int iCntSmall =0, iCntCapital =0;


  

    while (*str != '\0')
    {
        if ( *str >=('a') && *str <= ('z'))
        {
           iCntSmall ++; 
        }
        else  if ( *str >=('A') && *str <= ('Z'))
        {
           iCntCapital ++; 
        }
            str++;

    }

    return  iCntSmall  - iCntCapital ;
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

    iRet =Difference(Arr);
    printf("difference of count %d",iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "MarvellouS "         Output :6  (8-2)
//   
//
//
///////////////////////////////////////////////////////////////////