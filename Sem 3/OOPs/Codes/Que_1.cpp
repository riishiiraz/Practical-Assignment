/**
 * Que : 1| W.A.CPP.P. to implement a class called Circle that has private member variables for radius.
 *          Include member functions to calculate  the circle's Area and Circumference.
*/

#include <iostream>

using namespace std;

const float PI = 22/7.f; 

class Circle{
    float radius;

    public:

    Circle(){}

    Circle(float r){
        radius = r;
    }

    float Area(){
        return PI*radius*radius;
    }

    float Circumference(){
        return 2*PI*radius;
    }
};

int main(){

    float radius;
    cout<<"Enter Radius of the Circle : ";
    cin>>radius;

    Circle circle(radius);

    cout<<"Area of the Circle is : " << circle.Area() << " Sq. Units" << endl;
    cout<<"Circumference of the Circle is : " << circle.Circumference() << " Units" << endl;
}