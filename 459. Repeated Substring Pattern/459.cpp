#include <bits/stdc++.h>

using namespace std;

bool repeatedSubstringPattern(string s)
{
    //  tính cách này sẽ sai ở testcase{ababab} các số chia ra đều lẻ nên trả về false
    bool tmp = false;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second % 2 == 0)
        {
            tmp = true;
        }
        else
        {
            tmp = false;
        }
    }
    return tmp;
}
bool anotherSolution(string s)
{
    int n = s.size();
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            string sub = s.substr(0, i); // ab
            string tmp = "";
            for (int j = 0; j < n / i; j++)
            {
                tmp += sub;
            }
            if (tmp == s)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    string s;
    getline(cin, s);
    bool ans = anotherSolution(s);
    cout << (ans ? "true" : "false");
    return 0;
}