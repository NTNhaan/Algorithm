#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
// khó hiểu quá chưa ac được
string longestPalindrome(string s)
{
    int n = s.size();
    if (n == 0)
        return "";

    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int start = 0, maxLength = 1;

    for (int i = 0; i < n; ++i)
    {
        dp[i][i] = true;
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    for (int len = 3; len <= n; ++len)
    {
        for (int i = 0; i < n - len + 1; ++i)
        {
            int j = i + len - 1;
            if (dp[i + 1][j - 1] && s[i] == s[j])
            {
                dp[i][j] = true;
                start = i;
                maxLength = len;
            }
        }
    }

    return s.substr(start, maxLength);
}

int main()
{
    string s;
    getline(cin, s);
    cout << longestPalindrome(s);
    return 0;
}