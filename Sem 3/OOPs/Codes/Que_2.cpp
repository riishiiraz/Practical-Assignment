/**
 * Que : 2| W.A.CPP.P. to create a class called Person that has private member variable
 *          for name, age and country.
 *          Implement member functions to set and get the values of these variables.
*/

#include <iostream>

using namespace std;

class Person{
    char* name, *country;
    int age;

    public:

    // Getters
    char* getName(){
        return name;
    }
    char* getCountry(){
        return country;
    }
    int getAge(){
        return age;
    }

    // Setters
    void setName(char* name){
        this->name = name;
    }
    void setCountry(char* country){
        this->country = country;
    }
    void setAge(int age){
        this->age = age;
    }
};

int main(){

    char* name = new char[20];
    char* country = new char[20];
    int age;

    cout<<"Enter Person's name : ";
    cin.getline(name, 20);
    cout<<"Enter Person's age : ";
    cin>>age;
    cout<<"Enter Person's Country : ";
    cin>>country;

    Person person;

    person.setName(name);
    person.setAge(age);
    person.setCountry(country);

    cout<<endl;

    cout<<"Person's Name : " << person.getName() << endl;
    cout<<"Person's Age : " << person.getAge() << endl;
    cout<<"Person's Country : " << person.getCountry() << endl;

}