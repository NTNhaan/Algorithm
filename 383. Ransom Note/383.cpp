#include <bits/stdc++.h>
using namespace std;

bool canConstruct(string ransomNote, string magazine)
{
    unordered_map<char, int> mp;
    for (char i : magazine)
    {
        mp[i]++;
    }
    for (char i : ransomNote)
    {
        if (mp[i] <= 0)
        {
            return false;
        }
        mp[i]--;
    }
    return true;
}
int main()
{
    string a, b;
    cin >> a >> b;
    canConstruct(a, b) ? cout << "true" : cout << "false";
    return 0;
}