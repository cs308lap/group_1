#include "functions.h"
#include <stdexcept>

int factorial(int n){
    if (n < 0)
    {
      throw std::runtime_error("Enter a positive value for n! as we can calculate factorial for positive values");
    }
    if(n != 1)
    {
	    return(n * factorial(n-1));
    }
    else return 1;
}
