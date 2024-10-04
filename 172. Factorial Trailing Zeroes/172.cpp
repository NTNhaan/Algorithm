#include <bits/stdc++.h>
using namespace std;

int trailingZeroes(int n)
{
    int ans = 0;
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    while (result % 10 == 0)
    {
        ans++;
        result /= 10;
    }
    return ans;
}
int loopSolution(int n)
{
    int cnt = 0;
    while (n != 0)
    {
        int tmp = n / 5;
        cnt += tmp;
        n = tmp;
    }
    return cnt;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cout << trailingZeroes(n);
    return 0;
}