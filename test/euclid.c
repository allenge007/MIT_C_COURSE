#include "include/euclid.h"
#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y) {
    if(!x && !y) goto Error;
    if(!y) return x;
    return gcd(y, x % y);
Error:
    printf("Error while calculating gcd(%d, %d).\n", x, y);
    exit(0);
}

int lcm(int x, int y) {
    return x / gcd(x, y) * y;
}