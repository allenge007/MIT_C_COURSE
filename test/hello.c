#include <stdio.h>
#include <stdlib.h>
#include "include/euclid.h"

int main(int argc, char *argv[]) {
    if(argc > 3) goto Error;
    if(argc == 1) return printf("Hello!\n"), 0;
    int x = atoi(argv[1]), y = atoi(argv[2]);
    printf("Hello!\na = %s, b = %s\ngcd(a, b) = %d\n", argv[1], argv[2], gcd(x, y));
    Error:
    printf("You should provide two integers as arguments.\n");
    // printf("Hello!\n");
    return 0;
}