#include <bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) // this solution will time out
{
    if (n < 0)
        return false;
    int ans = 1;
    while (n < INT_MAX / 4)
    {
        if (ans == n)
            return true;
        n = ans * 4;
    }
    return false;
}
bool anotherSolution(int n)
{
    if (n <= 0)
        return false;
    while (n % 4 == 0)
    {
        n /= 4;
    }
    if (n == 1)
        return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    anotherSolution(n) ? cout << "true" : cout << "false";
    return 0;
}