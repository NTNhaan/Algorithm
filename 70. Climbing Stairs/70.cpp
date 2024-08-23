#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n <= 3)
        return n;
    int pre1 = 3;
    int pre2 = 2;
    int cur = 0;
    for (int i = 3; i < n; i++)
    {
        cur = pre1 + pre2;
        pre2 = pre1;
        pre1 = cur;
    }
    return cur;
}
int main()
{
    int n;
    cin >> n;
    cout << climbStairs(n);
    return 0;
}