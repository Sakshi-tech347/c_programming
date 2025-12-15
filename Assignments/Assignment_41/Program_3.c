///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include <stdio.h>       
 
///////////////////////////////////////////////////////////////////
//
//    Function Name : Display recurrsion
//    Desciption :    It use to dispay number of charectors
//    Input :         string
//    Output :        int
//    Auther :        Sakshi  Laxman Kachate
//    Date :          14/12/2025
//
/////////////////////////////////////////////////////////////////////
 


int strlen(char str[])
{
    if (str[0] == '\0')      
        return 0;

    return 1 + strlen(str + 1);   
}
  

///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
 
int main()
{
    char str[100];
    int iRet =0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

     
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        }
        i++;
    }
    iRet =strlen(str);
    printf("Number of characters = %d", iRet);
    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : sakshi    Output :   6
//   
//
///////////////////////////////////////////////////////////////////




