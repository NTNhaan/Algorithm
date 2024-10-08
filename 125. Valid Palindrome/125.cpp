#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string tmp;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9'))
        {
            tmp += s[i];
        }
    }
    int n = tmp.length();
    for (int i = 0; i < n; i++)
    {
        if (tmp[i] != tmp[n - i - 1])
            return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    isPalindrome(s) ? cout << "true" : cout << "false";
    return 0;
}