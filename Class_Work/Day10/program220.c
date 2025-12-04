///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<string.h>

 

///////////////////////////////////////////////////////////////////
//
//    Function Name :  StrLen
//    Desciption :    it is use to display count of A in string
//    Input :         Str[]
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          04/12/2025
//
/////////////////////////////////////////////////////////////////////
 
int Count( char str[])
{
  int iCount = 0;
  while(*str != '\0')
  {
    if(*str == 'A' || *str =='a')

    {
        iCount++;
    }
    *str++;
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
  char Arr [50] ={'\0'};
  int iRet =0;

  printf("Enter string :\n");
  scanf("%[^'\n']s,",&Arr);

  iRet =Count(Arr);
  printf("a : %d\n",iRet);


  return 0;
 }

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "SAkshi lAxman kachate "       Output : a:5 
  //                                         
// 
///////////////////////////////////////////////////////////////////






