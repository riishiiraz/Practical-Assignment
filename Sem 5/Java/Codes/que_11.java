/**
 * Que : 11 | W.A.J.P that reads a number and displays the square, cube, and fourth power.
 */

import java.util.Scanner;

public class que_11{
    public static void main(String[] args) {

        Scanner sca = new Scanner(System.in);
        int num;
        double sqr, cube, fourth;

        System.out.print("Enter a number : ");
        num = sca.nextInt();

        sqr = Math.pow(num, 2);
        cube = Math.pow(num, 3);
        fourth = Math.pow(num, 4);

        System.out.printf("Square of %d is %.2f\n", num, sqr);
        System.out.printf("Cube of %d is %.2f\n", num, cube);
        System.out.printf("Fourth Power of %d is %.2f\n", num, fourth);

        sca.close();
    }
}