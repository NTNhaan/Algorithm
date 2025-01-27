#include <bits/stdc++.h>

using namespace std;

int coinChange(vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;
    for (int coin : coins)
    {
        for (int i = coin; i <= amount; i++)
        {
            if (dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}
int main()
{
    int n, amount;
    cin >> n;
    vector<int> coins;
    while (n--)
    {
        int x;
        cin >> x;
        coins.push_back(x);
    }
    cin >> amount;
    cout << coinChange(coins, amount);
    return 0;
}