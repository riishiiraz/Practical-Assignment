/**
 * Que : 5 | W.A.J.P to calculate Compound interest.
 */

import java.util.Scanner;

public class que_5 {

    static double CompoundInterest(double P, double R, int Y, int N){
        // Formula : A = P * (1+ r/n) ^ (n*t)
        double amount = P *  Math.pow( ( 1 + R/N), (N*Y) );
        return amount;
    }

    public static void main(String[] args) {

        Scanner sca = new Scanner(System.in);

        double principal, rate, amount, interest;
        int time, n;

        System.out.print("Enter the Principal Amount : ");
        principal = sca.nextDouble();

        System.out.print("Enter the Annual Interest Rate : ");
        rate = sca.nextDouble();

        System.out.print("Enter the No. of Years : ");
        time = sca.nextInt();

        System.out.print("Enter the No. of times interest is compounded per year : ");
        n = sca.nextInt();

        amount = CompoundInterest(principal, rate, time, n);

        interest = amount - principal;

        System.out.printf("Total Amount after %d years : %.2f\n", time, amount);
        System.out.printf("Interest Earned: %.2f\n", interest);

        sca.close();
        
    }   
}
