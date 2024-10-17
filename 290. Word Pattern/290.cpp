#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s)
{
    vector<string> str;
    map<char, string> mp;
    map<string, char> check;
    string tmp = "";
    for (auto i : s)
    {
        if (i == ' ')
        {
            str.push_back(tmp);
            tmp = "";
            continue;
        }
        tmp += i;
    }
    str.push_back(tmp);
    if (str.size() != pattern.size())
    {
        return false;
    }
    for (int i = 0; i < pattern.size(); i++)
    {
        if (!mp.count(pattern[i]))
        {
            mp[pattern[i]] = str[i];
            if (check.count(str[i]) && check[str[i]] != pattern[i])
            {
                return false;
            }
            check[str[i]] = pattern[i];
        }
        else
        {
            if (mp[pattern[i]] != str[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    string pattern, s;
    cin >> pattern;
    cin.ignore();
    getline(cin, s);
    wordPattern(pattern, s) ? cout << "true" : cout << "false";
    return 0;
}