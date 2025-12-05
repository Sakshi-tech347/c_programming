///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       

///////////////////////////////////////////////////////////////////
//
//    Function Name : CountChar
//    Desciption :    It use to dispay frequency charector 
//    Input :         string
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 


int CountChar(char Str[], char ch)
{
  int iCount = 0;
  while(*Str != 0)
  {
    if ((*Str == ch))
    {
      iCount++;
    }
    Str++;
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
   scanf("%[^'\n]s",&Arr);

   printf("enter your Charector :\n");
   scanf(" %c",&cValue);

   iRet = CountChar(Arr , cValue);

   
    printf("charector frequency is %d ",iRet);
   
   return 0;
 }

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Marvellous"       Output : charector freqoency is 2
//  Input2 : charector : l
//
///////////////////////////////////////////////////////////////////




 
 
