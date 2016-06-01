#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

/* submit area start*/

struct TreeNode* trans(struct TreeNode* c) {
    if (c == NULL) {
        return NULL;
    }
    if (c->left == NULL && c->right == NULL) {
        return c;
    }
    if (c->left == NULL) {
        return trans(c->right);
    } else {
        struct TreeNode *r = c->right;
        c->right = c->left;
        c->left = NULL;
        struct TreeNode *t_last = trans(c->right);
        t_last->right = r;
        t_last->left = NULL;
        return r != NULL ? trans(r) : t_last;
    }
}

void flatten(struct TreeNode* root) {
    trans(root);
}

/* submit area end*/

int main() {

    return 0;
}
