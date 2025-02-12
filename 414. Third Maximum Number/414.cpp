#include <bits/stdc++.h>

using namespace std;

int thirdMax1(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (n > 3)
            nums.erase(nums.begin());
    }
    return n == 3 ? nums[0] : nums[n - 1];
}
int thirdMax2(vector<int> &nums)
{
    set<int> ans;
    for (auto tmp : nums)
    {
        ans.insert(tmp);
        if (ans.size() > 3)
            ans.erase(ans.begin());
    }
    return ans.size() == 3 ? *ans.begin() : *ans.rbegin();
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
    cout << thirdMax2(nums);
    return 0;
}