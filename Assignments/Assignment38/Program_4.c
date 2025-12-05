///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       
 
///////////////////////////////////////////////////////////////////
//
//    Function Name : StrCpyCap
//    Desciption :    It use to dispay the string converting capitalinto  small 
//    Input :         string
//    Output :        string
//    Auther :        Sakshi  Laxman Kachate
//    Date :          05/12/2025
//
/////////////////////////////////////////////////////////////////////
 
 void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')   
        {
           
            *dest = *src+32;
            
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
    char Arr[50]={"marvellous python"};
    char Brr[30];

    StrCpyCap(Arr ,Brr);
    printf("string convert into small :\t%s\n",Brr);
     

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 :    MARVELLOUS PYTHON    Output : "marvellous python" 
//   
//
///////////////////////////////////////////////////////////////////




 
 




