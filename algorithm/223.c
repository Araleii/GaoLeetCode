#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* submit area start*/

#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )

int inter(int a, int b, int c, int d) {
    int t;
    if (a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    if (c > d) {
        c ^= d;
        d ^= c;
        c ^= d;
    }
    int r = min(b, d);
    int l = max(a, c);
    return  r > l ? r - l : 0;
}

int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    return abs(A - C) * abs(B - D) - inter(A, C, E, G) * inter(B, D, F, H) + abs(E - G) * abs(F - H); 
}

/* submit area end*/

int main() {

    printf("%d\n", computeArea(-1500000001, 0, -1500000000, 1, 1500000000, 0, 1500000001, 1));
    return 0;
}
