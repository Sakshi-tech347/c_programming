
///////////////////////////////////////////////////////////////////
//    
//    Required header file
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>


///////////////////////////////////////////////////////////////////
//
//    Function Name : AddionTwoNumbers 
//    Desciption :    It is used to perform Addition
//    Input :         Float,Float
//    Output :        Float
//    Auther :        Sakshi  Laxman Kachate
//    Date :          09/10/2025
//
/////////////////////////////////////////////////////////////////////



int AddionTwoNumbers(
                        float fNo1,                  // First Input
                        float fNo2                   // Second Input
                    )
{
  float fSum =0;                                     // To store the result
                                                     
  if(fNo1< 0.0f)                                     //Updator
  {
    fNo1 =-fNo1;
  }

  if(fNo2< 0.0f)                                     //Updator
  {
    fNo2 =-fNo2;
  }

  fSum =fNo1+fNo2;     ///Business logic
  return fSum;
} // End of addition

///////////////////////////////////////////////////////////////////
//    
//    Entry point Function for the application
//
///////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0;             // To accept user input
    float fRet = 0.0;                                // To store the result

    printf("enter first no: \n");
    scanf("%f",&fValue1);

    printf("enter first no: \n");
    scanf("%f",&fValue2);
    
    fRet = AddionTwoNumbers(fValue1,fValue2);        // method call

    printf(" Addition is %f\n",fRet);


    return 0;
} // End of main

///////////////////////////////////////////////////////////////////
//  
//  Testcases Succesfully handled by Application
//    
//  Input1 : 10.5       Input2 : 3.2    Output : 13.7
//  Input1 : -10.5      Input2 : 3.2    Output : 13.7
//  Input1 : 10.5       Input2 : -3.2   Output :13.7
//  Input1 : -10.5      Input2 : -3.2   Output :13.7
//  Input1 : 10.5       Input2 : 0.0    Output : 10.5
//
//
///////////////////////////////////////////////////////////////////