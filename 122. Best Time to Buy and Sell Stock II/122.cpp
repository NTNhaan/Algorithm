#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int min = INT_MAX;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] < min)
        {
            min = prices[i];
        }
        else
        {
            if (i == n - 1 || prices[i] > prices[i + 1])
            {
                ans += prices[i] - min;
                min = prices[i];
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> prices;
    while (n--)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    cout << maxProfit(prices);
    return 0;
}