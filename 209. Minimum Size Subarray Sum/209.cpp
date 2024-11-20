#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int> nums)
{
    int n = nums.size();
    int left = 0;
    int right = 0;
    int sum = 0;
    int ans = INT_MAX;
    while (right < n)
    {
        sum += nums[right];
        while (sum >= target)
        {
            ans = min(ans, right - left + 1);
            sum -= nums[left];
            left++;
        }
        right++;
    }
    return ans == INT_MAX ? 0 : ans;
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << minSubArrayLen(target, nums);
    return 0;
}