#include <bits/stdc++.h>
using namespace std;

void generate(int numRows)
{
    vector<vector<int>> res = {{1}};
    for (int i = 0; i < numRows - 1; i++)
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
    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    generate(n);
    return 0;
}