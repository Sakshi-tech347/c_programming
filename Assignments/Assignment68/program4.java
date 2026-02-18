import java.util.*;

class program4
{
     // 0000     0000    0000    0000    0000    0001    8400    0000

    public static void main(String[] A) 
    {
        int iNo =0;
        Scanner sobj = new Scanner(System.in); 
        System.out.println("Enter Number :");
        iNo = sobj.nextInt();


        int iMask =0;
        iMask =0x000001C0;
 
         int iResult= 0;
        

        iResult =  iNo & iMask ;

            if(iResult == iMask)
            {
     
     
                System.out.println(" 7,8,9 is On");
            }
            else
            {
                System.out.println(" 7,8,9 is  Of");
            }
    }
}

/*
    Enter Number :
448
 7,8,9 is On

C:\Users\Admin\Desktop\Assignments\Assignment64>java program3.java
Enter Number :
896
 7,8,9 is  Of

*/