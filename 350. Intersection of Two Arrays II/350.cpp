#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> nums1, vector<int> nums2)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for (int i : nums1)
    {
        mp[i]++;
    }
    for (int j : nums2)
    {
        if (mp[j] > 0)
        {
            ans.push_back(j);
            mp[j]--;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums1;
    vector<int> nums2;
    while (n--)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    vector<int> ans = intersection(nums1, nums2);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}