#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int n)
{
    string res;
    while (n != 0)
    {
        res.push_back('A' + (n - 1) % 26);
        n = (n - 1) / 26;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    int n;
    cin >> n;
    cout << convertToTitle(n);
    return 0;
}