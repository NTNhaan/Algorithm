#include <bits/stdc++.h>
using namespace std;

int trap(vector<int> &height)
{
    int left = 0;
    int right = height.size() - 1;
    int water = 0;
    int Lmax = height[left];
    int Rmax = height[right];
    while (left != right)
    {
        if (Lmax < Rmax)
        {
            left++;
            Lmax = max(Lmax, height[left]);
            water += Lmax - height[left];
        }
        else
        {
            right--;
            Rmax = max(Rmax, height[right]);
            water += Rmax - height[right];
        }
    }
    return water;
}
int main()
{
    int n;
    cin >> n;
    vector<int> height;
    while (n--)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }
    cout << trap(height);
    return 0;
}