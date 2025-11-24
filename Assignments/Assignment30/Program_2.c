/*
    iRow 4
    iCol 4
    o/p : 
           
           
          Diagonal Pattern with frame

          * # # #        i  1,1  1,2  1,3  1,4
          * * # #           2,1  2,2  2,3  2,4
          * * * #           3,1  3,2  3,3  3,4
          * * * *           4,1  4,2  4,3  4,4        
                            
                            
          
*/ 

#include<stdio.h>

   void Pattern(int iRow ,int iCol)
    {
        int i = 0,j=0;

        if(iRow != iCol)
        {
            printf("it is a invalid input\n");
            printf("row number and column number should be same");
            return ;
        }

        for(i=1 ; i<= iRow ;i++)
        {
            for(j = 1; j<= iCol ; j++)
            {
                if(i<j)
                
                
                    printf("#\t");
                
                else
                
                  printf("*\t");  
                

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

