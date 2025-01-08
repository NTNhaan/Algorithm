#include <bits/stdc++.h>
using namespace std;

int arrangeCoins(int n)
{
    int i = 1;
    while (n != 0 && n >= i)
    {
        n -= i;
        i++;
    }
    return i - 1;
}
int main()
{
    int n;
    cin >> n;
    cout << arrangeCoins(n);
    return 0;
}