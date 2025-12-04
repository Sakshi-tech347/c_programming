///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//    Function Name :  StrLen
//    Desciption :    it is use to display count of chareator in string
//    Input :         Str[]
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          04/12/2025
//
/////////////////////////////////////////////////////////////////////
 
int StrLen(char Str[])
{
int iCount = 0;
  while (*Str != '\0')
  {
      
      iCount++;
      Str++;

  }
  
   return iCount;
}
 


///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
int main() 
{
    int iRet =0;
    char Arr[50]={'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = StrLen(Arr);
    printf("%d",iRet);
    

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Sakshi "       Output :6
  //                                         
// 
///////////////////////////////////////////////////////////////////






