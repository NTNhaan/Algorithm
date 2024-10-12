#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> nums)
{
    int ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i != nums[i])
            return i;
    }
    return n;
}
int main()
{
    int n;
    vector<int> nums;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << missingNumber(nums);
    return 0;
}