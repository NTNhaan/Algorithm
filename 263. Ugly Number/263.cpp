#include <bits/stdc++.h>
using namespace std;

bool isUgly(int n)
{
    if (n == 1)
        return true;
    if (n == 0 || n % 5 != 0 && n % 3 != 0 && n % 2 != 0)
        return false;
    if (n % 5 == 0)
        return isUgly(n / 5);
    if (n % 3 == 0)
        return isUgly(n / 3);
    if (n % 2 == 0)
        return isUgly(n / 2);
    return false;
}
int main()
{
    int n;
    cin >> n;
    isUgly(n) ? cout << "true" : cout << "false";
    return 0;
}