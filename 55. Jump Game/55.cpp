#include <bits/stdc++.h>
using namespace std;

bool canJump(vector<int> &nums)
{
    int goal = nums.size() - 1;
    for (int i = nums.size() - 2; i >= 0; i--)
    {
        if (i + nums[i] >= goal)
            goal = i;
    }
    return goal == 0;
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
    canJump(nums) ? cout << "true" : cout << "false";
    return 0;
}