/**
 * Que : 10 | W.A.J.P that reads an integer between 0 and 1000 and adds all the digits in the integer.
 */

import java.util.Scanner;

public class que_10 {

    static int sumOfDigits(int num){

        int s = 0;

        while (num>0){
            s += num%10;
            num /=10;
        }

        return s;
    }

    public static void main(String[] args) {
        
        Scanner sca = new Scanner(System.in);
        int num, sum;

        System.out.print("Enter a number : ");
        num = sca.nextInt();

        sum = sumOfDigits(num);

        System.out.println("Sum is " + sum );

        sca.close();

        
    }
    
}
