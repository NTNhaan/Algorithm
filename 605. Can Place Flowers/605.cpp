#include <bits/stdc++.h>

using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int k = flowerbed.size();
    vector<int> ans(k + 2, 0);
    for (int i = 0; i < k; i++)
    {
        ans[i + 1] = flowerbed[i];
    }
    for (int i = 1; i < ans.size(); i++)
    {
        if (ans[i] == 0 && ans[i - 1] == 0 && ans[i + 1] == 0)
        {
            ans[i] = 1;
            n--;
        }
    }
    if (n <= 0)
    {
        return true;
    }
    return false;
}
bool canPlaceFlowers1(vector<int> &flowerbed, int n)
{
    int k = flowerbed.size();
    for (int i = 0; i < k; i++)
    {
        if (flowerbed[i] == 0)
        {
            if ((i == 0 || flowerbed[i - 1] == 0) && (i == k - 1 || flowerbed[i + 1] == 0))
            {
                flowerbed[i] = 1;
                n--;
            }
        }
    }
    return n <= 0;
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
    int k;
    cin >> k;
    canPlaceFlowers1(ans, k) ? cout << "true" : cout << "false";
    return 0;
}