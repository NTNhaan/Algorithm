#include <bits/stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int n = nums.size();
    int cnt = 0, ans = 0;
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            cnt = 0;
        }
        else
            cnt++;
        ans = max(ans, cnt);
    }
    return ans;
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
    cout << findMaxConsecutiveOnes(nums);
    return 0;
}