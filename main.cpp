#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;

    int x = 56, y = 98;
    cout<<"The GCD of "<<x<<" and "<<y<<" calculated iteratively is "<<gcd(x, y)<<endl;
    cout<<"The GCD of "<<x<<" and "<<y<<" calculated recursively is "<<gcd_rec(x, y)<<endl;
    return 0;
}
