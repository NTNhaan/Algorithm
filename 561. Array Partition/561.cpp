#include <bits/stdc++.h>

using namespace std;

int arrayPairSum(vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans += nums[i];
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    while (n--)
    {
        int x;
        cin >> x;
        ans.push_back(x);
    }
    cout << arrayPairSum(ans);
    return 0;
}