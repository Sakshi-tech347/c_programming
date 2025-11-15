


#include<stdio.h>

int AddionTwoNumbers(float fNo1,float fNo2)
{
  float fSum =0;
  //Updator
  if(fNo1< 0.0f)
  {
    fNo1 =-fNo1;
  }

  if(fNo2< 0.0f)
  {
    fNo2 =-fNo2;
  }

  fSum =fNo1+fNo2;     ///Business logic
  return fSum;
}



int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0, fRet = 0.0;

    printf("enter first no: \n");
    scanf("%f",&fValue1);

    printf("enter first no: \n");
    scanf("%f",&fValue2);
    
    fRet = AddionTwoNumbers(fValue1,fValue2);

    printf(" Addition is %f\n",fRet);


    return 0;
}