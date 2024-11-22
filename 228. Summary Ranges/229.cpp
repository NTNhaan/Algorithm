#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> ans;
    int l = 0;
    int n = nums.size();
    if (n == 0)
        return ans;
    while (l < n)
    {
        int r = l + 1;
        int tmp = nums[l];
        while (nums[r] == tmp + 1)
        {
            tmp = nums[r];
            r++;
        }
        if (r - l == 1)
        {
            ans.push_back(to_string(nums[l]));
        }
        else
        {
            ans.push_back(to_string(nums[l]) + "->" + to_string(nums[r - 1]));
        }
        l = r;
    }
    return ans;
}
vector<string> anotherSolution(vector<int> &nums)
{
    vector<string> ans;
    int n = nums.size();
    if (n == 0)
    {
        return ans;
    }
    int l = nums[0];
    int r = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == r + 1)
        {
            r = nums[i];
        }
        else
        {
            string tmp = to_string(l);
            if (l != r)
            {
                tmp = tmp + "->" + to_string(r);
            }
            ans.push_back(tmp);
            l = nums[i];
            r = nums[i];
        }
    }
    string tmp = to_string(l);
    if (l != r)
    {
        tmp = tmp + "->" + to_string(r);
    }
    ans.push_back(tmp);
    return ans;
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
    vector<string> tmp = anotherSolution(nums);
    for (auto x : tmp)
    {
        cout << x << " ";
    }
    return 0;
}