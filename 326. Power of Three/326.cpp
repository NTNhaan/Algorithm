#include <bits/stdc++.h>
using namespace std;

bool isPowerOfThree(int n)
{
    if (n <= 0)
        return false;
    while (n % 3 == 0)
    {
        n /= 3;
    }
    return n == 1;
}
bool anOtherSolution(int n)
{
    if (n <= 0)
        return false;
    int tmp = 1;
    while (tmp < INT_MAX / 3)
    {
        if (tmp == n)
            return true;
        tmp *= 3;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    isPowerOfThree(n) ? cout << "true" : cout << "false";
    return 0;
}