import java.util.*;

class program2
{
     // 0000     0000    0000    0020    0000    0000    0001    0000

    public static void main(String[] A) 
    {
        int iNo =0;
        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();


        int iMask =0;
        iMask =0x00020010;
 
         int iResult= 0;
        

        iResult =  iNo & iMask ;

            if(iResult == iMask)
            {
                System.out.println(" 3rd  & 8th bitn is On");
            }
            else
            {
                System.out.println(" 3rd & 8th bit is Of");
            }
    }
}