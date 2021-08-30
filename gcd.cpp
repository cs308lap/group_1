#include "functions.h"

int gcd(int x, int y) {
    int z;
    while(y != 0) {
        z = x;
        x = y;
        y = z % y;
    }
    return x;
}

int gcd_rec(int x, int y) {
    if(y == 0)
        return x;
    return gcd_rec(y, x%y);
}