
/*class Logic
{
    void calculateSum(int n)
    {
        int iTotal = 0;
       

        for(i =1; i<=n ; i++)
        {
            iTotal = i + iTotal;
        }
        System.out.println("Sum of Total number is:"+ iTotal);
    }
}



class Program_1
{
    public static void main(String a[])
    {
        Logic lobj = new Logic();
        lobj.calculateSum(10);
    }

}*/
class Program_1 {
    public static void main(String[] args) {
        int iTotal = 0; // initialize variable

        // your logic for total (example)
        for (int i = 1; i <= 5; i++) {
            iTotal = iTotal + i;
        }

        // print result
        System.out.println("Sum of Total number is: " + iTotal);
        // or
        // System.out.printf("Sum of Total number is: %d%n", iTotal);
    }
}

