/**
 * Que : 9 | W.A.J.P that throws an exception and catch it using a try-catch block.
 */

import java.util.Scanner;

public class que_9 {

    static float Division(int a, int b) throws Exception{
        if(b==0){
            throw new Exception("Cannot divide a number by zero.");
        }
        return (float)a/b;
    }


    public static void main(String[] args) {
        Scanner sca = new Scanner(System.in);
        int a,b;
        float res;

        System.out.print("Enter two numbers to divide : ");
        a = sca.nextInt();
        b = sca.nextInt();

        try{
            res = Division(a, b);
            System.out.println("Division is " + res);
        }
        catch (Exception  exc){
            System.out.println(exc);
        }

        sca.close();
    }
}
