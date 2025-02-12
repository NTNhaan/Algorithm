#include <bits/stdc++.h>

using namespace std;

vector<int> findDisappearedNumbers(vector<int> &nums)
{
    set<int> tmp;
    vector<int> ans;
    for (auto i : nums)
    {
        tmp.insert(i);
    }
    for (int i = 1; i <= nums.size(); i++)
    {
        if (tmp.find(i) == tmp.end())
        {
            ans.push_back(i);
        }
    }
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
    vector<int> ans = findDisappearedNumbers(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}