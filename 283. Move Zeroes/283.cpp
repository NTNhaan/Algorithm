#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> nums)
{
    int n = nums.size();
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[l]);
            l++;
        }
    }
    for (auto i : nums)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    moveZeroes(nums);
    return 0;
}