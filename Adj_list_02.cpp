#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    string name;
    list<string> nbrs;

    Node(string name)
    {
        this->name = name;
    }
};

class Graph
{

    unordered_map<string, Node *> m;

public:
    Graph(vector<string> cities)
    {
        for (auto city : cities)
        {
            m[city] = new Node(city);
        }
    }

    void addedge(string x, string y, bool undir = false)
    {
        m[x]->nbrs.push_back(y);

        if (undir)
        {
            m[y]->nbrs.push_back(x);
        }
    }

    void printAdj()
    {

        for (auto citypair : m)
        {
            auto city = citypair.first;
            Node *node = citypair.second;
            cout << city << "-->";
            for (auto nbr : node->nbrs)
            {
                cout << nbr << ",";
            }
            cout << endl;
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> cities = {"Delhi", "paris", "New york", "Mumbai", "Banglore"};

    Graph g(cities);

    g.addedge("Delhi", "paris");
    g.addedge("Banglore", "paris");
    g.addedge("Delhi", "New york");
    g.addedge("paris", "New york");
    g.printAdj();

    return 0;
}