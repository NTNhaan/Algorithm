#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> nums)
{
    int n = nums.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second == 1)
            return i.first;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> tmp;
    while (n--)
    {
        int x;
        cin >> x;
        tmp.push_back(x);
    }
    cout << singleNumber(tmp);
    return 0;
}