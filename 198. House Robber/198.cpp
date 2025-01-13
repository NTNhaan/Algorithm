#include <bits/stdc++.h>
using namespace std;

int rob(vector<int> &nums)
{

    int n = nums.size();
    vector<int> ans(n, 0);
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    if (n == 2)
        return max(nums[0], nums[1]);
    ans[0] = nums[0];
    ans[1] = max(nums[0], nums[1]);
    for (int i = 2; i < nums.size(); i++)
    {
        ans[i] = max(ans[i - 1], ans[i - 2] + nums[i]);
    }
    return ans[n - 1];
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
    cout << rob(nums);
    return 0;
}