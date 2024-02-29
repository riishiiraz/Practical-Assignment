/**
 * Que : 7| W.A.CPP.P. to implement multiple inheritence.
*/

#include <iostream>

using namespace std;

class Animal{
    public:
    void printAnimal(){
        cout<<"It is an Animal"<<endl;
    }
};

class Mammal{
    public:
    void printMammal(){
        cout<<"It is a Mammal"<<endl;
    }
};

class Pet{
    public:
    void printPet(){
        cout<<"It is a Pet Animal"<<endl;
    }
};

class Cat : public Animal, public Mammal, public Pet{
    void printCat(){
        cout<<"This is a Cat"<<endl;
    }
    public:

    Cat(){
        printCat();
        printAnimal();
        printMammal();
        printPet();
    }

};


int main(){

    Cat cat;

}