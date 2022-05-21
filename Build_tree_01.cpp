#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildtree()
{

    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }

    node *n = new node(d);

    n->left = buildtree();
    n->right = buildtree();

    return n;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}