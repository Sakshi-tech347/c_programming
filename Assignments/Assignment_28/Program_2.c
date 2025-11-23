/*
 ip : row 4 
      col 3
 
                    j         
 op :A B C D   i  1,1  1,2  1,3  1,4
     a b c d      2,1  2,2  2,3  2,4
     A B C D      3,1  3,2  3,3  3,4
     a b c d      4,1  4,2  4,3  4,4

*/


#include<stdio.h>

void pattern(int iRow, int iCol)
{
    int i=0, j=0;
    char ch1 = 'A';
    char ch2 = 'a';

    for(i=1 ; i<=iRow ; i++)
    {
        ch2 = 'a',ch1 ='A'; 
        for(j=1; j <=iCol ; j++)
        if(i%2 == 0)
        {
           
            printf("%c\t",ch2);
            ch2++;
        }
        
        else
        {
           
            printf("%c\t",ch1);
            ch1++;
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 =0, iValue2 =0;
    
    printf("enter the number of row:");
    scanf("%d",&iValue1);

    printf("enter the number of column:");
    scanf("%d",&iValue2);
    
    pattern(iValue1,iValue2);
    
    return 0;
}