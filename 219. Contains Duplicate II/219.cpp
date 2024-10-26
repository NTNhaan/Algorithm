#include <bits/stdc++.h>

using namespace std;

bool containsNearbyDuplicate(vector<int> nums, int k)
{ // timelimit exceeded
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j] && abs(i - j) <= k)
                return true;
        }
    }
    return false;
}
bool containsDuplicate(vector<int> nums, int k)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (mp.count(nums[i]) && i - mp[nums[i]] <= k)
        {
            return true;
        }
        mp[nums[i]] = i;
    }
    return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    containsDuplicate(nums, k) ? cout << "true" : cout << "false";
    return 0;
}