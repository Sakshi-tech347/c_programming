/*
    iRow 4
    iCol 4
    o/p : 
           
           
          Diagonal Pattern with frame

          * * * #         ,1  1,2  1,3i 1  1,4     i=j , i<j 
          *   # *           2,1  2,2  2,3  2,4
          * #   *           3,1  3,2  3,3  3,4
          # * * *           4,1  4,2  4,3  4,4        
                            
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1 2 3 4 5
          
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    for(int i = 1; i <= iRow; i++)
    {
        for(int j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow ||j == iCol ||j == 1 ||i==j)                // first or last row
            {
                printf("%d\t", j);
            }
           
            else if(j == i)                    // second column always 2
            {
                printf("%d\t",i);
            }
            
            
            else                                // empty space
            {
                printf("\t");
            }
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
    
    Pattern( iValue1,  iValue2);
    
    return 0;
}

