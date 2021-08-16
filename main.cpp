#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    cout << "The factorial of -1 is " << factorial(-1) << endl;
    return 0;
}
