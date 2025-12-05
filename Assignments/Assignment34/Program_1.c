#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
      for(i = 0; i <= 127; i++)
    {
        if(i >= 32 && i <= 126)    
        {
            printf("%3d\t%02X\t%03o\t%c\n", i, i, i, i);
        }
        else                       
        {
            printf("%3d\t%02X\t%03o\tNon-printable\n", i, i, i);
        }
    }
}
int main()
{   
    printf("ASCII Table (0 to 127)\n");
    printf("----------------------\n");
    printf("Dec\tHex\tOct\tChar\n");
    printf("----------------------\n");
    DisplayASCII();
    return 0;
}


 
