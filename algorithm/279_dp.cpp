#include <stdio.h>
#include <stdlib.h>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/* submit area start*/

#include <limits.h>

#define max(a,b) ( ((a)>(b)) ? (a):(b) )
#define min(a,b) ( ((a)>(b)) ? (b):(a) )

vector<int> f;

int numSquares(int n) {
    f.clear();
    f.push_back(0);


    for (int i = 1; i <= n; i++) {
        f.push_back(INT_MAX);
    }
    
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i + j * j <= n) {
                f[i + j * j] = min(f[i + j * j], f[i] + 1); 
            } else {
                break;
            }
        }
    }

    return f[n];
}

/* submit area end*/

int main() {
    printf("%d\n", numSquares(16));
    return 0;
}
