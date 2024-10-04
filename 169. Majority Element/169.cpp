#include <bits/stdc++.h>
using namespace std;

int SortingAlgorithm(vector<int> num)
{
    sort(num.begin(), num.end());
    return num[num.size() / 2];
}
int HashMapAlgorithm(vector<int> num)
{
    unordered_map<int, int> mp;
    int n = num.size();
    for (int i = 0; i < n; i++)
    {
        mp[num[i]]++;
    }
    int maxCnt = 0;
    int tmp = 0;
    for (auto i : mp)
    {
        if (i.second > maxCnt)
        {
            maxCnt = i.second;
            tmp = i.first;
        }
    }
    return tmp;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> tmp;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        tmp.push_back(x);
    }
    cout << HashMapAlgorithm(tmp);
    return 0;
}