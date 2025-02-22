#include <bits/stdc++.h>

using namespace std;

int findPoisonedDuration(vector<int> &timeSeries, int duration)
{
    int n = timeSeries.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return duration;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        ans += min(timeSeries[i] - timeSeries[i - 1], duration);
    }
    return ans + duration;
}
int main()
{
    int n, duration;
    cin >> n;
    vector<int> timeSeries;
    while (n--)
    {
        int x;
        cin >> x;
        timeSeries.push_back(x);
    }
    cin >> duration;
    cout << findPoisonedDuration(timeSeries, duration);
    return 0;
}