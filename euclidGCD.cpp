#include <iostream>
#include <vector>

using namespace std;

/*Implementing Euclidean algorithm to find gcd of two integer numbers*/


    
  
int calcGcd(int a, int b) {
    int c;
        
    if ( a < 0) {
        a = abs(a);
    }

    else if (b < 0) {
        b = abs(b);
    }

    else if (a + b == 0) {
        return -1;
    }

    c = b;

    while ( a > 0) {
        c = a;
        a = b % a;
        b = c;
    }
    return c;
};


int main(int argc, char *argv[]){

    int a, b, c;

    cout<<"Enter two numbers: "<<endl;
    cin>>a;
    cin>>b;
    c = calcGcd(a,b);
    cout<<"GCD is: " << c << endl;

}