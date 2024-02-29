/**
 * Que : 5| W.A.CPP.P. to reverse a number using function.
*/

#include <iostream>

using namespace std;

int reverse(int num){
    int rev = 0;

    while(num){
        rev = (rev*10) + (num%10);
        num/=10;
    }
    return rev;
}


int main(){

    int num, rev;

    cout<<"Enter a number to reverse : ";
    cin>>num;
    rev = reverse(num);
    cout<<"Reverse is : "<<rev;
   
}