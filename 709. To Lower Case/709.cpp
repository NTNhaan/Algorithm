#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    cout << toLowerCase(s);
    return 0;
}