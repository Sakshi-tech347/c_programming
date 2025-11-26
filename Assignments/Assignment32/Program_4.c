/*
    iRow 4
    iCol 4
    o/p : 
           
           
          Diagonal Pattern with frame

                   i 1,1  1,2  1,3  1,4      
                     2,1  2,2  2,3  2,4
                     3,1  3,2  3,3  3,4
                     4,1  4,2  4,3  4,4        
                            
         enter the number of row:8
         enter the number of column:8
*       *       *       *       *       *       *       *
*       $       $       $       $       $       *       *
*       $       $       $       $       *       #       *
*       $       $       $       *       #       #       *
*       $       $       *       #       #       #       *
*       $       *       #       #       #       #       *
*       *       #       #       #       #       #       *
*       *       *       *       *       *       *       *                   
          
*/

#include<stdio.h>

void Pattern(int row, int col)
{
    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= col; j++)
        {
            if(i == 1 ||  i == row || j == 1||j == col  || 
               i == j || (i + j) == (row + 1))
            {
                printf("*\t");
            }
            else if(j < (col + 1) / 2)   // left upper triangle
            {
                printf("$\t");
            }
            else                        // right below triangle
            {
                printf("#\t");
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


