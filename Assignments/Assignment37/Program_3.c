///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       

///////////////////////////////////////////////////////////////////
//
//    Function Name :  FirstChar
//    Desciption :    It use to dispay location of charector 
//    Input :         string
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 


int FirstChar(char Str[], char ch)
{
  int iCount = 0;
  while(*Str != 0)
  {
    if ((*Str == ch))
    {
      return iCount;
    }
    
    Str++;
    iCount++;
  }
   return -1;
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
   scanf("%[^'\n]s",&Arr);

   printf("enter your Charector :\n");
   scanf(" %c",&cValue);

   iRet =  FirstChar(Arr , cValue);

   
    printf("charector location is %d ",iRet);
   
   return 0;
 }

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Marvellous"       Output : charector location is 5
//  Input2 : charector : l
//
///////////////////////////////////////////////////////////////////




 
 
