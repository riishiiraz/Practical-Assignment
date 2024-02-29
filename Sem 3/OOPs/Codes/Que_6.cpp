/**
 * Que : 6| W.A.CPP.P. to implement concept of friend function.
*/

#include <iostream>

using namespace std;

class Person{
    char* name = new char[20];
    
    int age;

    public:

    Person(){}
    Person(char* name, int age){
        this->name = name;
        this->age = age;
    }

    friend void printPersom(Person &person);

};

void printPersom(Person &person){
    cout<<"Accessing Private Members by FRIEND function"<<endl;
    cout<<"Person's Name : "<<person.name<<endl;
    cout<<"Person's Age : "<<person.age<<endl;

}

int main(){

    Person person("Sophie", 25);
    printPersom(person);
}