#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] > 1)
        {
            return true;
        }
    }
    return false;
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
    containsDuplicate(nums) ? cout << "true" : cout << "false";
    return 0;
}