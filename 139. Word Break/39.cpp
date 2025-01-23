#include <bits/stdc++.h>
using namespace std;

bool wordBreak(string s, vector<string> &wordDict)
{
    unordered_set<string> dict;
    for (string word : wordDict)
    {
        dict.insert(word);
    }
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (dp[j] == true && dict.find(s.substr(j, i - j)) != dict.end())
            {
                dp[i] = true;
                break;
            }
        }
    }
    return dp[n];
}
int main()
{
    string s;
    getline(cin, s);
    vector<string> wordDict;
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string x;
        getline(cin, x);
        wordDict.push_back(x);
    }
    bool ans = wordBreak(s, wordDict);
    cout << (ans ? "true" : "false");
    return 0;
}