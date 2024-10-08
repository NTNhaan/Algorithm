#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> prices)
{
    int n = prices.size();
    int flag = prices[0];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (flag > prices[i])
        {
            flag = prices[i];
        }
        ans = max(ans, prices[i] - flag);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> tmp;
    while (n--)
    {
        int x;
        cin >> x;
        tmp.push_back(x);
    }
    cout << maxProfit(tmp);
    return 0;
}