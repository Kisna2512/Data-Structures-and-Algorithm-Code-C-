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

Node *findMIn(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node *deletion(Node *root, int key)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (key < root->data)
    {
        root->left = deletion(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deletion(root->right, key);
    }

    else
    {

        // No child
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            return root;
        }

        // one child
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        // one child
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        // 2 children
        else
        {

            Node *temp = findMIn(root->right);
            root->data = temp->data;
            root->right = deletion(root->right, temp->data);
        }
    }
    return root;
}

void print(Node *root)
{
    if (root == NULL)
    {
          return;
    }
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

    // int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
    int n;
    cout << "Enter How many node you want to insert:- " << endl;
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " nodes in tree" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (auto it : arr)
    {
        node = insert(node, it);
    }

    print(node);

    int key;
    cout << "Enter The node which you want to delete " << endl;
    cin >> key;

    cout << endl;
    node = deletion(node, key);

    print(node);

    return 0;
}