#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.size() != t.size())
    {
        return false;
    }
    unordered_map<char, int> ansS;
    unordered_map<char, int> ansT;
    for (int i = 0; i < s.size(); i++)
    {
        ansS[s[i]]++;
        ansT[t[i]]++;
    }
    for (auto i : ansS)
    {
        if (ansT.find(i.first) == ansT.end() || ansT[i.first] != i.second)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s, t;
    cin >> s >> t;
    isAnagram(s, t) ? cout << "true" : cout << "false";
    return 0;
}