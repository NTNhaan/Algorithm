#include <iostream>
using namespace std;

int Solve(int x)
{
    long ans = 0;
    while (x != 0)
    {
        int tmp = x % 10;
        ans = ans * 10 + tmp;
        x /= 10;
    }
    if (ans > INT_MAX || ans < INT_MIN)
        return 0;
    return (int)ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin >> x;
    cout << Solve(x);
    return 0;
}