/**
 * Que : 4 | W.A.J.P to find factorial of a number.
 */

import java.util.Scanner;

public class que_4 {

    static int factorial(int n){
        if(n == 1)
            return 1;
        return n*factorial(n-1);
    }
    public static void main(String[] args) {
        Scanner sca = new Scanner (System.in);
        System.out.print("Enter a number : ");
        int num = sca.nextInt();

        int fact = factorial ( num );

        System.out.println("Factorial of " + num + " is : " + fact );

        sca.close();
    }
    
}
