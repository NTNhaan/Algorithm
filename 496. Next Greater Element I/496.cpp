#include <bits/stdc++.h>

using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < nums2.size(); i++)
    {
        for (int j = i + 1; j < nums2.size(); j++)
        {
            if (nums2[j] > nums2[i])
            {
                mp[nums2[i]] = nums2[j];
                break;
            }
            else
            {
                mp[nums2[i]] = -1;
            }
        }
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        if (mp.find(nums1[i]) != mp.end())
        {
            ans.push_back(mp[nums1[i]]);
        }
        else
        {
            ans.push_back(-1);
        }
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums1, nums2;
    while (n--)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    while (m--)
    {
        int y;
        cin >> y;
        nums2.push_back(y);
    }
    vector<int> ans = nextGreaterElement(nums1, nums2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}