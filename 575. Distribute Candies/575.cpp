#include <bits/stdc++.h>

using namespace std;

int distributeCandies(vector<int> &candyType)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < candyType.size(); i++)
    {
        mp[candyType[i]]++;
    }
    int n = candyType.size() / 2;
    if (mp.size() >= n)
    {
        return n;
    }
    return mp.size();
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
    cout << distributeCandies(ans);
    return 0;
}