#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    if (nums.empty())
    {
        return 0;
    }
    int n = nums.size();
    vector<int> dp(n + 1, 1);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[i] > nums[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    return *max_element(dp.begin(), dp.end());
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << lengthOfLIS(nums);
    return 0;
}