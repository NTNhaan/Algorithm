#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> ThreeSumCloset(vector<int> nums, int target)
{
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue;
        }
        int j = i + 1;
        int k = nums.size() - 1;
        while (j < k)
        {
            int ans = nums[i] + nums[j] + nums[k];
            if (ans > 0)
            {
                k--;
            }
            else if (ans < 0)
            {
                j++;
            }
            else
            {
                res.push_back({nums[i], nums[j], nums[k]});
                j++;
                while (nums[j] == nums[j - 1] && j < k)
                {
                    j++;
                }
            }
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int target;
    cin >> target;
    vector<vector<int>> res = ThreeSumCloset(nums, target);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}