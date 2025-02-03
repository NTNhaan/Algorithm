#include <bits/stdc++.h>
using namespace std;

vector<int> getRow(int rowIndex)
{
    vector<vector<int>> res = {{1}};
    for (int i = 0; i < rowIndex; i++)
    {
        vector<int> tmp = {0};
        tmp.insert(tmp.end(), res.back().begin(), res.back().end());
        tmp.push_back(0);
        vector<int> row;
        for (int j = 0; j < tmp.size() - 1; j++)
        {
            row.push_back(tmp[j] + tmp[j + 1]);
        }
        res.push_back(row);
    }
    return res.back();
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = getRow(n);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}