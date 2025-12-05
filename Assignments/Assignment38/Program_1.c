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
 
 
  


        void strCpyrev(char *src ,char*dest)
        { 
            int temp =0;

            while(src[temp] != '\0')
            {
                 temp++;
            }
         temp--;

         int i =0;
         while (temp >= 0)
         {
            dest[i] = src[temp];
            temp--;
            i++;


         }
        dest[i] = '\0';
            
        }

///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application 
//
///////////////////////////////////////////////////////////////////
 
int main()
{
    char Arr[50]={"marvellous"};
    char Brr[30];

   strCpyrev(Arr ,Brr);
    printf("updated string %s\n",Brr);
     

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




