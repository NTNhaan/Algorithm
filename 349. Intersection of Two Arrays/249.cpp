#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> s;
    for (int i = 0; i < nums1.size(); i++)
    {
        s.insert(nums1[i]);
    }
    unordered_set<int> s2;
    for (int i = 0; i < nums2.size(); i++)
    {
        if (s.find(nums2[i]) != s.end())
        {
            s2.insert(nums2[i]);
        }
    }
    vector<int> ans;
    for (auto i : s2)
    {
        ans.push_back(i);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> tmp;
    vector<int> tmp2;
    while (n--)
    {
        int x;
        cin >> x;
        tmp.push_back(x);
    }
    int a;
    cin >> a;
    while (a--)
    {
        int y;
        cin >> y;
        tmp2.push_back(y);
    }
    vector<int> ans = intersection(tmp, tmp2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}