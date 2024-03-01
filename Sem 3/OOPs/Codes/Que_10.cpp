/**
 * Que : 10| W.A.CPP.P. to print mathematical table of any inputted number
 *           using return type function.
*/

#include <iostream>

using namespace std;

int table(int N, int i){
    return N*i;
}

int main(){
    int num;

    cout<<"Enter a Number : ";
    cin>>num;

    cout<<"Table of "<<num<<" is : "<<endl;

    for(int i=1; i<=10; i++){
        cout<<num<<" * "<<i<<" = "<< table(num, i) <<endl;
    }
}