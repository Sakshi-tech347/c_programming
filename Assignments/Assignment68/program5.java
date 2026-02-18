import java.util.*;

class program5
{
     // 8000     0000    0000    0000    0000    0000    0000    0001

    public static void main(String[] A) 
    {
        long lNo = 0;
        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter Number :");
        lNo = sobj.nextLong();


        long lMask =0;
        lMask =0x80000001L;
 
        long lResult= 0;
        

        lResult =  lNo & lMask ;

            if(lResult == lMask)
            {
     
                System.out.println(" 1 & 32 is On");
            }
            else
            {
                System.out.println(" 1 & 32 is  Of");
            }
    }
}

/*
    Enter Number :
Enter Number :
2147483649
 1 & 32 is On

Enter Number :
2147483648
 1 & 32 is  Of
*/