#include <iostream>
#include <vector>

using namespace std;

/*Implementing Euclidean algorithm to find gcd of two integer numbers*/


    
  
int calcGcd(int a, int b) {
    int c;
        
    //Switch negative inputs to positives using absolute values
    if ( a < 0) {
        a = abs(a);
    }

    if (b < 0) {
        b = abs(b);
    }

    //If same number is inputted twice, the GCD is the number
    if (a + b == 0) {
        return a;
    }

    
    //Initialize the value
    c = b;

    //Find GCD by finding the remainder for a = q * b + r
    //Repeat until r = 0
    while ( a > 0) {
        c = a;
        a = b % a;          //Store the remainder as a for next loop run
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