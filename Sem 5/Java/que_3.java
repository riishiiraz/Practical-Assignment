/**
 * Que : 3 | W.A.J.P to check leap year.
 */

import java.util.Scanner;

public class que_3 {

    static boolean isLeapYear(short year){
        if(year % 4 == 0 && year % 100 != 0)
            return true;
        else if(year % 400 ==0)
            return true;
        return false;
    }
    public static void main(String[] args) {

        Scanner sca = new Scanner(System.in);
        System.out.print("Enter Year : ");
        short year = sca.nextShort();

        if(isLeapYear(year))
            System.out.println( year + " is a Leap Year.");
        else
            System.out.println( year + " is NOT a Leap Year.");

        sca.close();
    }
}
