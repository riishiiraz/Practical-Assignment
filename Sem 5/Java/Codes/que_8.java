/**
 * Que : 8 | W.A.J.P to create a Animal interface with a method called bark() that
 *           takes no arguments and returns void. Create a Dog class that implements
 *           Animal and overrides speak() to print "Dog is barking".
 */

interface Animal{
    void bark();
}

class Dog implements Animal{
    @Override
    public void bark(){
        System.out.println("Dog is barking");
    }
}

public class que_8 {
    public static void main(String[] args) {
        Animal myDog = new Dog();
        myDog.bark();
    }
}