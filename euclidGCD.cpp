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

//Bruce Schneier's multiple GCD implementation in C
int multipleGCD( int m, int *x) {
    size_t i;
    int g;

    if (m < 1) {
        return 0;
    }

    g = x[0];

    for(i = 1; i < m; ++i){
        g = calcGcd(g, x[i]);
/* optimization, since for random x[i], g == 1 60% of the time: */
        if (g == 1) {
            return 1;
        }
        return g;
    }
}


int main(int argc, char *argv[]){

    int a, b, c, e;

    int d[5] = {13, 26, 39, 52, 65};

    cout<<"Enter two numbers: "<<endl;
    cin>>a;
    cin>>b;
    c = calcGcd(a,b);
    cout<<"GCD1 is: " << c << endl;

    e = multipleGCD(b, d);

    cout<<"GCD2 is: " << e << endl;

}