/**
 * Que : 4| W.A.CPP.P. to print fibonacci series upto N limit.
*/

#include <iostream>

using namespace std;

void printFibonacci(int N){
    int a=0, b=1, temp;

    cout<<"0 ";
    while (N-- -1)
    {
        cout<<b<<" ";
        temp = a;
        a=b;
        b=temp+b;
    }
    
}

int main(){

    int N;
    cout<<"Enter No. of terms : ";
    cin>>N;

    printFibonacci(N);
}