        ///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>     
//////////////////////////////////////////////////////////////////
//
//    Function Name :  tolwr
//    Desciption :    It use to convrt upper to lower
//    Input :         char
//    Output :        char
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////  
 
 char ToLwr(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch= ch + 32;  
    }
    return ch;
}


///////////////////////////////////////////////////////////////////
//
//    Function Name :  LastChar
//    Desciption :    It use to dispay location of charector 
//    Input :         string
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 


int LastChar(char *str, char ch)
{
    int iLastind = 0;
    int iCount = -1;

    char target = ToLwr(ch);

    while(*str != '\0')
    {
        if(ToLwr(*str) == target)
        {
             iCount= iLastind;   
        }
        str++;
        iLastind++;
    }

    return iCount;
}
  

///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
 
int  main()
 {
   char Arr[50] ={'\0'};
   char cValue = '\0';
   int iRet = 0;

   printf(" Enter your String :\n");
   scanf("%[^\n]s",&Arr);

   printf("enter your Charector :\n");
   scanf(" %c",&cValue);

   iRet =   LastChar(Arr , cValue);

   
    printf("charector  last location is %d ",iRet);
   
   return 0;
 }

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Marvellous"       Output : charector  last location is 6
//  Input2 : charector : l
//
//Input1 : "Marvellous"       Output : charector  last location is -1
//  Input2 : charector : W
//
//Input1 : "Marvellous"       Output : charector  last location is 4
//  Input2 : charector : e
//
///////////////////////////////////////////////////////////////////




 
 
