#include <bits/stdc++.h>
using namespace std;

int firstUniqChar(string s)
{
    int n = s.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (mp[s[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}
int anotherSolution(string s)
{
    int n = s.size();
    unordered_map<char, pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[s[i]].first++;
        mp[s[i]].second = i;
    }
    for (const auto &[c, p] : mp)
    {
        if (p.first == 1)
        {
            n = min(n, p.second);
        }
    }
    return n == s.size() ? -1 : n;
}
int main()
{
    string s;
    getline(cin, s);
    cout << anotherSolution(s);
    return 0;
}