#include <bits/stdc++.h>

using namespace std;

bool isPerfectSquare(int num)
{
    if (num < 2)
        return true;
    long long left = 2, right = num / 2, mid, guessSquared;
    while (left <= right)
    {
        mid = left + (right - left) / 2;
        guessSquared = mid * mid;
        if (guessSquared == num)
            return true;
        if (guessSquared < num)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    bool ans = isPerfectSquare(n);
    cout << ((ans) ? "true" : "false");
    return 0;
}