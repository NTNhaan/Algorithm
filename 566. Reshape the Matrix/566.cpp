#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int row = mat.size();
    int col = mat[0].size();
    if (row * col != r * c)
    {
        return mat;
    }
    vector<vector<int>> ans(r, vector<int>(c));
    for (int i = 0; i < row * col; i++)
    {
        ans[i / c][i % c] = mat[i / col][i % col];
    }
    return ans;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        ans.push_back(temp);
    }
    int r, c;
    cin >> r >> c;
    vector<vector<int>> res = matrixReshape(ans, r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}