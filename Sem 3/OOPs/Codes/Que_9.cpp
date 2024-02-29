/**
 * Que : 9| W.A.CPP.P. to print summation of each digits in any
 *          inputted number.
*/

#include <iostream>

using namespace std;

int sumOfDigits(int num){
    int sum = 0;

    while(num){
        sum+=(num%10);
        num/=10;
    }
    return sum;
}



int main(){

    int num, sum;

    cout<<"Enter a Number : ";
    cin>>num;

    sum = sumOfDigits(num);

    cout<<"Sum of digits of "<< num <<" is : "<<sum;
}