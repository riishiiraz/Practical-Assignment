/**
 * Que : 1 | W.A.J.P to perform Addition, Subtraction, Multiplication & Division.
 *           Take input from user.
 */

import java.util.Scanner;

public class que_1 {

    static void print(String text){
        System.out.println(text);
    }
    static void print(String text, char end){
        System.out.print(text+end);
    }
    public static void main(String[] args) {
        print("Enter :");
        print("1. for Addition");
        print("2. for Subtraction");
        print("3. for Multiplication");
        print("4. for Division");
        print("5. for Exit");
        print("Choice [1-5] : ", ' ');

        Scanner sca = new Scanner(System.in);
        byte choice;
        int a,b;

        choice = sca.nextByte();


        print("Enter 1st No. : ", ' ');
        a = sca.nextInt();
        print("Enter 2nd No. : ", ' ');
        b = sca.nextInt();

        switch (choice) {
            case 1:
                print("Addition : " + (a+b) );
                break;

            case 2:
                print("Subtraction : " + (a-b));
                break;

            case 3:
                print("Multiplication : " + (a*b));
                break;

            case 4:
                print("Division : " + ((float)a/b));
                break;

            case 5:
                print("Exiting the program. Goodbye!");
                sca.close();
                return; // exits the main method, thus ending the program
        
            default:
                print("Invalid choice entered.");
                break;
        }
        
        print("Goodbye !");
        sca.close();
    }    
}
