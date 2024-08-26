#include <bits/stdc++.h>
using namespace std;
bool canWinNim(int n)
{
    if (n % 4 == 0)
        return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    canWinNim(n) ? cout << "true" : cout << "false";
    return 0;
}