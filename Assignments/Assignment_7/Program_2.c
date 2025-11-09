#include<stdio.h>

void Display(int iNo)
{
     
    if (iNo <0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
         case 0:
            printf( "zero \n");
            break;

        case 1:
            printf( "one \n");
            break;
            
        case 2:
            printf( "two \n");
            break;
            
        case 3:
            printf( "three \n");
            break;
           
        case 4:
            printf( "Foure \n");
            break;
            
        case 5:
            printf( "Five \n");
            break;

        case 6:
            printf( "Six \n");
            break;

        case 7:
            printf( "seven \n");
            break;

        case 8:
            printf( "Eignht \n");
            break;

         case 9:
            printf( "Nine \n");
            break;
    }
   
}

int main()
{
    int iValue = 0;

    printf("enter  single Digit number:");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}
