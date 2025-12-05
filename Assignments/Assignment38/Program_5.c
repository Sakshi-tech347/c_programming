///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       
 
///////////////////////////////////////////////////////////////////
//
//    Function Name :StrCpyToggle
//    Desciption :    It use to dispay the string converting  toggele
//    Input :         string
//    Output :        string
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 
 void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')   
        {
           
            *dest = *src+32;
            
        }
         
         else if(*src >= 'a' && *src <= 'z')   
        {
           
            *dest = *src-32;
            
        }
        else
        {
             *dest = *src;
        }
        dest++;
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
    char Arr[50]={"marvellous PYTHON  "};
    char Brr[30];

    StrCpyToggle(Arr ,Brr);
    printf("string convert into small :\t%s\n",Brr);
     

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 :     marvellous PYTHON    Output : "MARVELLOUS python" 
//   
//
///////////////////////////////////////////////////////////////////




 
 




