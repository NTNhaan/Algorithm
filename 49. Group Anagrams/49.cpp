#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (string s : strs)
    {
        string t = s;
        sort(t.begin(), t.end());
        mp[t].push_back(s);
    }
    vector<vector<string>> anagrams;
    for (auto p : mp)
    {
        anagrams.push_back(p.second);
    }
    return anagrams;
}
int main()
{
    int n;
    cin >> n;
    vector<string> strs;
    while (n--)
    {
        string s;
        cin >> s;
        strs.push_back(s);
    }
    vector<vector<string>> res = groupAnagrams(strs);
    for (auto v : res)
    {
        for (string s : v)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}