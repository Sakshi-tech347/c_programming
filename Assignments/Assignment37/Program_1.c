///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       
typedef int BOOL;
#define TRUE 1
#define FALSE 0



///////////////////////////////////////////////////////////////////
//
//    Function Name : ChkChar
//    Desciption :    It use to dispay charector is  present or not in string
//    Input :         string
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 


BOOL ChkChar(char Str[], char ch)
{
  int iCount = 0;
  while(*Str != 0)
  {
    if ((*Str == ch))
    {
      return TRUE;
    }
    Str++;
  }
   return FALSE;
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
   BOOL bRet = FALSE;

   printf(" Enter your String :\n");
   scanf("%[^'\n]s",&Arr);

   printf("enter your Charector :\n");
   scanf(" %c",&cValue);

   bRet = ChkChar(Arr , cValue);

   if(bRet == TRUE)
   {
    printf("charector found ");
   }
   else
    {
    printf("charector not found ");
   }
   return 0;
 }

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Marvellous"       Output : charector found
//  Input2 : charector : s
//
///////////////////////////////////////////////////////////////////




 
 
