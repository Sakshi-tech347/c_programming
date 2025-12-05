///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////
//
//    Function Name : check vowels in string
//    Desciption :    It is used check voewls in it
//    Input :         string
//    Output :        int 
//    Auther :        Sakshi  Laxman Kachate
//    Date :          01/12/2025
//
/////////////////////////////////////////////////////////////////////
bool chkvowel(char *str[]) 
{
    for(int i = 0; *str[i] != '\0'; i++) {
        char ch = *str[i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
        {
            return true;    
        }
    }
    return false;   
}


///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
int main() 
{
    char str[20];

    printf("Enter string: ");
    scanf("%s", str);

    bool result = chkvowel( str);

    if(result)
        printf("String contains vowel\n");
    else
        printf("String does not contain vowel\n");

    return 0;
}

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : "MarvellouS "       Output : String Contain vowel
//   
//
///////////////////////////////////////////////////////////////////






