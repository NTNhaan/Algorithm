#include <bits/stdc++.h>
using namespace std;

bool wordPattern(string pattern, string s)
{
    unordered_map<char, int> mpp;
    unordered_map<string, int> mps;
    vector<string> str;
    stringstream ss(s);
    string work;
    while (ss >> work)
    {
        str.push_back(work);
    }
    if (pattern.size() != str.size())
        return false;
    for (int i = 0; i < pattern.size(); i++)
    {
        if (mpp[pattern[i]] != mps[str[i]])
            return false;
        mpp[pattern[i]] = i + 1;
        mps[str[i]] = i + 1;
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