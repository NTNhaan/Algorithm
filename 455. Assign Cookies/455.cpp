#include <bits/stdc++.h>

using namespace std;

int findContentChildren(vector<int> &g, vector<int> &s)
{
    int ans = 0;
    int tmp1 = g.size();
    int tmp2 = s.size();
    if (tmp2 == 0)
        return 0;
    ans = tmp1 % tmp2;
    return ans;
}
int SuccessSolution(vector<int> &g, vector<int> &s)
{
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int person = 0, cookie = 0;
    while (person < g.size() && cookie < s.size())
    {
        if (g[person] <= s[cookie])
        {
            person++;
        }
        cookie++;
    }
    return person;
}
int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> g;
    vector<int> s;
    while (a--)
    {
        int x;
        cin >> x;
        g.push_back(x);
    }
    while (b--)
    {
        int y;
        cin >> y;
        s.push_back(y);
    }
    cout << SuccessSolution(g, s);
    return 0;
}