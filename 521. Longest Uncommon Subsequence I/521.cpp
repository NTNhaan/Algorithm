#include <bits/stdc++.h>

using namespace std;

int findLUSlength(string a, string b)
{
    if (a == b)
        return -1;
    return max(a.size(), b.size());
}
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << findLUSlength(a, b);
    return 0;
}