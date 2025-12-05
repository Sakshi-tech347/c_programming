///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       
 
///////////////////////////////////////////////////////////////////
//
//    Function Name : StrRevX
//    Desciption :    It use to dispay reverse the string 
//    Input :         string
//    Output :        string
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 
 
  
 void StrRevX(char str[])
{
    char *start = str;
    char *end = str;
    char temp;

     
    while (*end != '\0')
    {
        end++;
    }
    end--;   
 
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
 
int main()
{
    char Arr[50];

    printf("Enter String:\n");
    scanf("%[^\n]s", Arr);

   StrRevX(Arr);

    printf("Modified  String: %s\n", Arr);

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "abcd"       Output :  updated string is dcba
//   
//
///////////////////////////////////////////////////////////////////




 
 #include <stdio.h>




