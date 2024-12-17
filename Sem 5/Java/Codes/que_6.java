/**
 * Que : 6 | W.A.J.P to calculate Area of Rectangle.
 */

import java.util.Scanner;

public class que_6 {
    static int Area(int l, int w){
        return l*w;
    }

    public static void main(String[] args) {

        Scanner sca = new Scanner(System.in);
        int length, width, area;

        System.out.print("Enter the Length of Rectangle : ");
        length = sca.nextInt();

        System.out.print("Enter the Width of Rectangle : ");
        width = sca.nextInt();

        area = Area (length, width);

        System.out.printf("Area of Rectangle is : %d Sq. units.%n", area);

        sca.close();
    }   
}