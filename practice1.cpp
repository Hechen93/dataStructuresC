#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    cout<<"Hello Harrison\n";

    int A[5] = {1,2,3,4,5};

    for(int x : A) {
        printf("Number: %d\n", A[x]);
    }

    return 0;
}