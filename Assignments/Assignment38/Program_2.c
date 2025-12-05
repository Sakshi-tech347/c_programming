///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       
 
///////////////////////////////////////////////////////////////////
//
//    Function Name : StrRevX
//    Desciption :    It use to dispay the string removing ehite space 
//    Input :         string
//    Output :        string
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 
 void StrRevX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ' && *src != '\t')   
        {
            *dest = *src;   
            dest++;
        }
        src++;
    }

    *dest = '\0';   
}

///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
 
int main()
 
{
    char Arr[50]={"marv ellous py thon"};
    char Brr[30];

    StrRevX(Arr ,Brr);
    printf("string removing white spaces : \t%s\n",Brr);
     

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "marv ellous py thon"      Output :  updated string is dcba
//   
//
///////////////////////////////////////////////////////////////////




 
 




