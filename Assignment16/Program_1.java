import java.util.Scanner;


 class SumOfNaturalNumbers {

    // Void function to calculate and display the sum
    static void calculateSum(int n) {
        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += i;
        }

        System.out.println("Sum of first " + n + " natural numbers = " + sum);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the value of N: ");
        int n = sc.nextInt();

        if (n <= 0) {
            System.out.println("Invalid input! N should be positive.");
        } else {
            // Call the void function
            calculateSum(n);
        }
    }
}
