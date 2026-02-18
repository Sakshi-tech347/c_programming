import java.util.*;

class program3
{
     // 0000     8000    0001    0000    0400    0000    0400    0000

    public static void main(String[] A) 
    {
        int iNo =0;
        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();


        int iMask =0;
        iMask =0x08104040;
 
         int iResult= 0;
        

        iResult =  iNo & iMask ;

            if(iResult == iMask)
            {
     
                System.out.println(" 7,15 & 21,28 is On");
            }
            else
            {
                System.out.println(" 7,15 & 21,28 is  Of");
            }
    }
}

/*
    Enter Number :
135282752
 7,15 & 21,28 is On

C:\Users\Admin\Desktop\Assignments\Assignment64>java program3.java
Enter Number :
135282688
 7,15 & 21,28 is  Of

*/