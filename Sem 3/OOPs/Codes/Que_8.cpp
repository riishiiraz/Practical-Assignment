/**
 * Que : 8| W.A.CPP.P. to calculate summation of N numbers.
*/

#include <iostream>

using namespace std;

int summation(int N){
    int sum = 0;

    while(N){
        sum += N;
        N--;
    }

    return sum;
}

int main(){
    int N, sum;

    cout<<"Enter N : ";
    cin>>N;
    
    sum = summation(N);

    cout<<"Summation of "<<N<<" terms is : "<<sum;
       
}