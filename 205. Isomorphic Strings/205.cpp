#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{
    int n = s.length();
    unordered_map<char, char> mp1, mp2;

    if (s.length() != t.length())
        return false;
    for (int i = 0; i < n; i++)
    {
        if (mp1.count(s[i]) && mp1[s[i]] != t[i] || mp2.count(t[i]) && mp2[t[i]] != s[i])
            return false;
        mp1[s[i]] = t[i];
        mp2[t[i]] = s[i];
    }
    return true;
}
int main()
{
    string a, b;
    cin >> a >> b;
    isIsomorphic(a, b) ? cout << "true" : cout << "false";
    return 0;
}
