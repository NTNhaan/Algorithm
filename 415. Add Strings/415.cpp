#include <bits/stdc++.h>

using namespace std;

string addStrings(string num1, string num2)
{
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int tmp = 0;
    string ans = "";
    while (i >= 0 || j >= 0 || tmp)
    {
        if (i >= 0)
        {
            tmp += num1[i] - '0';
            i--;
        }
        if (j >= 0)
        {
            tmp += num2[j] - '0';
            j--;
        }
        ans += char(tmp % 10 + '0');
        tmp /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string num1, num2;
    getline(cin, num1);
    getline(cin, num2);
    cout << addStrings(num1, num2);
    return 0;
}