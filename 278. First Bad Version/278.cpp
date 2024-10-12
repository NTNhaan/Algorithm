#include <bits/stdc++.h>
using namespace std;

int firstBadVersion(int n, int target)
{
    int left = 1, right = n;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (mid == target)
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}
int main()
{
    int n, target;
    cin >> n >> target;
    cout << firstBadVersion(n, target);
    return 0;
}