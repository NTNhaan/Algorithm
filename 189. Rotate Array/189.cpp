#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> nums, int k)
{
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    for (auto i : nums)
        cout << i << " ";
    // vector<int> nums1;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (i > k)
    //     {
    //         nums1.push_back(nums[i]);
    //     }
    // }
    // nums.erase(nums.begin() + k + 1, nums.end());
    // nums1.insert(nums1.end(), nums.begin(), nums.end());
    // for (auto i : nums1)
    // {
    //     cout << i << " ";
    // }
}
int main()
{
    int n, k;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;
    rotate(nums, k);
    return 0;
}