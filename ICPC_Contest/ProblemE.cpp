#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<int> timein, timeout;
int timer = 0;
void dfs(int node, int parent)
{
    in_time[node] = ++timer;
    for (int child : tree[node])
    {
        if (child != parent)
        {
            dfs(child, node);
        }
    }
    out_time[node] = ++timer;
}
bool isAncestor(int x, int y)
{
    return in_time[x] < in_time[y] && out_time[x] > out_time[y];
}
int main()
{
    int n;
    cin >> n;
    tree.resize(n + 1);
    timein.resize(n + 1);
    timeout.resize(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    dfs(1, -1);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int x, y;
        cin >> x >> y;
        if (isAncestor(x, y))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}