#include <iostream>
#include <list>
using namespace std;

int main()
{
    // list of create a graph data structure
    // list<pair<int, int>> l; // for single list
    // list<pair<int, int>> l[5]; // for 5 lists
    list<pair<int, int>> *l; // for Dynamic list l is a pointer to an array of linked list objects

    int n;
    cin >> n;
    l = new list<pair<int, int>>[n];
    int e;
    cin >> e;
    for (int i = 0; i < e; i++)
    {
        int x, y, wt;
        cin >> x >> y >> wt;
        l[x].push_back(make_pair(y, wt));
        l[y].push_back(make_pair(x, wt));
    }

    // print the linked lists
    for (int i = 0; i < n; i++)
    {
        // print every linked list
        cout << "linked list " << i << "->";
        for (auto xp : l[i])
        {
            cout << "(" << xp.first << "," << xp.second << "),";
        }
        cout << endl;
    }

    return 0;
}