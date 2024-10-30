#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int flag = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[flag])
        {
            flag++;
        }
        else
            continue;
    }
    if (flag == s.length())
        return true;
    return false;
}
bool anotherSolution(string s, string t)
{
    int i = 0, j = 0;
    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
        {
            i++;
        }
        j++;
    }
    return i == s.length();
}
int main()
{
    string s, t;
    cin >> s >> t;
    isSubsequence(s, t) ? cout << "true" : cout << "false";
    return 0;
}