/**
 * Que : 7 | W.A.J.P that takes a number from the user and generates an integer
 *           between 1 and 7. It displays the weekday name.
 */

import java.util.Scanner;

enum Weekday {
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY;

    public static Weekday getWeekday(int n) {
        Weekday[] weeks = values();

        if (n >= 1 && n < weeks.length+1) {
            return weeks[n-1];
        }
        throw new IllegalArgumentException("Illegal week number provided.");
    }
}

public class que_7 {
    
  public static void main(String[] args) {

    Scanner sca = new Scanner(System.in);
    byte weekNumber;

    System.out.print("Enter week number (1-7) : ");
    weekNumber = sca.nextByte();

    System.out.println("Weekday is " + Weekday.getWeekday(weekNumber));
    
    sca.close();
  }
}