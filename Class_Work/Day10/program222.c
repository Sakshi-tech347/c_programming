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
 
 int CountVowels(char Str[])
 {
  int iCount =0;

  while(*Str != '\0')
  {
    if(*Str =='A' || *Str == 'E' || *Str == 'I'|| *Str == 'O'|| *Str == 'U'
    || *Str == 'a'|| *Str == 'e'|| *Str == 'i'|| *Str == 'o'|| *Str == 'u')
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
int main()
{
  int iRet = 0;
  char Arr[50] ={'\0'};

  printf("Enter a String\n");
  scanf("%[^'\n']s",&Arr);

  iRet =CountVowels(Arr);
  printf("number of vowels is:%d",iRet);
  



  return 0;
} 

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "sAkshi laxman kachatE "       Output : number of vowels is : 7
  //                                         
// 
///////////////////////////////////////////////////////////////////






