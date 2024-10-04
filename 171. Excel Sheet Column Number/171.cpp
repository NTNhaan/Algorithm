#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        ans = ans * 26 + (s[i] - 'A' + 1);
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    cout << titleToNumber(s);
    return 0;
}