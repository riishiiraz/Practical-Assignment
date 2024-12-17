/**
 * Que : 2 | W.A.J.P to Add two Complex numbers.
 */


class Complex{
    private int real, img;

    Complex(){
        real = 0;
        img = 0;
    }

    Complex(int real, int img){
        this.real = real;
        this.img = img;
    }

    void disp(String text){
        System.out.println(text + real + " + i"+img);
    }

    static Complex add (Complex c1, Complex c2){
        Complex temp = new Complex();
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
    }
}

public class que_2 {
    public static void main(String[] args) {
        Complex c1 = new Complex(4,5);
        Complex c2 = new Complex(2,3);
        c1.disp("1st Complex no. : ");
        c2.disp("2nd Complex no. : ");

        Complex c3;

        c3 = Complex.add(c1, c2);

        c3.disp("Sum of Complex no.s : ");

    }
    
}
