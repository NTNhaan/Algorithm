#include <bits/stdc++.h>

using namespace std;

int longestPalindrome(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    for (auto i : mp)
    {
        ans += i.second / 2 * 2;
    }
    if (ans < s.size())
    {
        ans++;
    }
    return ans;
}
int unotherSolution(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int ans = 0;
    for (auto i : mp)
    {
        if (i.second % 2 == 0)
        {
            ans += i.second;
        }
        else
        {
            ans += i.second - 1;
        }
    }
    if (ans < s.size())
    {
        ans++;
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << unotherSolution(s);
    return 0;
}