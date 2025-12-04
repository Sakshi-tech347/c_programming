///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//    Function Name :  Display
//    Desciption :    it is use to display string
//    Input :         string
//    Output :        string
//    Auther :        Sakshi  Laxman Kachate
//    Date :          04/12/2025
//
/////////////////////////////////////////////////////////////////////
 
void Display(char *Str)
{
  printf("%c\n",*Str);
  Str++;

  printf("%c\n",*Str);
  Str++;

  printf("%c\n",*Str);
  Str++;

}
 


///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
int main() 
{
    char Arr[50]={'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s",&Arr);

    Display(Arr);

    

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "Sakshi "       Output :S
//                                   a
//                                   k   
//
///////////////////////////////////////////////////////////////////






