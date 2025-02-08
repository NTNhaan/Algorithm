#include <bits/stdc++.h>

using namespace std;

int minimumTotal(vector<vector<int>> &triangle)
{
    int n = triangle.size();    
    vector<int> tmp = triangle[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            tmp[j] = triangle[i][j] + min(tmp[j], tmp[j + 1]);
        }
    }
    return tmp[0];
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> triangle;
    while (n--)
    {
        vector<int> tmp;
        int x;
        while (cin >> x)
        {
            tmp.push_back(x);
            if (cin.get() == '\n')
            {
                break;
            }
        }
        triangle.push_back(tmp);
    }
    cout << minimumTotal(triangle);
    return 0;
}