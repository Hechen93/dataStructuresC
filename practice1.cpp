/*
    Change Remote Origin Command: https://devconnected.com/how-to-change-git-remote-origin/
    Set .gitignore: https://coursework.vschool.io/create-a-gitignore/

*/

#include <iostream>

using namespace std;

//Creating a template class for an exercise
//Will allow for addition/sub of any primitive data type for numerical calculation

//Have to declare template at start of the class
template<class T>
class Arithmetic {
    private:
        T a;        //Declare the class data types as template types
        T b;
    public:
        Arithmetic(T a, T b);       //Constructor, declare the constructor parameters as template types
        T add();                    //Function signatures: Declare return values as template types
        T sub();
};

        template<class T>           //Declare function as a template function
        Arithmetic<T>::Arithmetic(T a, T b) {       //Declare that constructor belongs to Arithmetic class
            this -> a = a;
            this -> b = b;
        }

        template<class T>
        T Arithmetic<T>::add() {      //Function return type is a template type, belongs to template class Arithmetic<T>
            T c;
            c = a + b;
            return c;
        }

        template<class T>
        T Arithmetic<T>::sub() {
            T c;
            c = a - b;
            return c;
        }


int main(int argc, char *argv[]){

    Arithmetic<int> ar(5,7);
    Arithmetic<float> br(10.43, 3.41);

    printf("ar sum: %d\n ", ar.add());
    printf("br difference: %f\n ", br.sub());

    return 0;
}