#include <bits/stdc++.h>

using namespace std;

string licenseKeyFormatting(string s, int k)
{
    string ans = "";
    int n = s.length();
    int cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == '-')
            continue;
        if (cnt > 0 && cnt % k == 0)
        {
            ans += '-';
        }
        ans += toupper(s[i]);
        cnt++;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    cout << licenseKeyFormatting(s, n);
    return 0;
}