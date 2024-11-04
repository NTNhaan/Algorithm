#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{
    int ans = 0;
    while (num > 0)
    {
        ans = num % 10;
        num /= 10;
        if (num > 0)
            num += ans;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << addDigits(n);
    return 0;
}