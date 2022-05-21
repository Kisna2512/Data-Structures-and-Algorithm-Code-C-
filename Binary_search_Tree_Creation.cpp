#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

Node *insert(Node *root, int key)
{
    if (root == NULL)
        return new Node(key);

    if (root->left)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

bool search(Node *root, int key)
{

    if (root == NULL)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }

    return search(root->right, key);
}

void print(Node *root)
{
    if (root == NULL)
        return;
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Node *node = NULL;
    // vector<vector<int>> v{{0,0}};

    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    for (auto it : arr)
    {
        node = insert(node, it);
    }
    print(node);

    int key;
    cin >> key;

    cout << endl;
    cout << search(node, 10) << endl;

    return 0;
}