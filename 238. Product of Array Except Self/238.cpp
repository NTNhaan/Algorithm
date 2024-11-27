#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    int i = 0;
    while (i < n)
    {
        if (nums[i] == 0)
        {
            ans.push_back(0);
            i++;
        }
        else
        {
            int tmp = 1;
            for (auto j : nums)
            {
                if (j == nums[i])
                    continue;
                tmp = tmp * j;
            }
            ans.push_back(tmp);
            i++;
        }
    }
    return ans;
}
vector<int> anotherSolution(vector<int> &nums)
{
    vector<int> ans(nums.size(), 1);
    int left = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        ans[i] *= left;
        left *= nums[i];
    }
    int right = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        ans[i] *= right;
        right *= nums[i];
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
    vector<int> ans = anotherSolution(nums);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}