#include <bits/stdc++.h>

using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> ans;
    while (n--)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    vector<int> tmp = targetIndices(ans, target);
    for (auto i : tmp)
    {
        cout << i << " ";
    }
    return 0;
}