#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> nums1, int m, vector<int> nums2, int n)
{
    int flag1 = m - 1;
    int flag2 = n - 1;
    int right = m + n - 1;

    while (flag2 >= 0)
    {
        if (flag1 >= 0 && nums1[flag1] > nums2[flag2])
        {
            nums1[right] = nums1[flag1];
            flag1--;
        }
        else
        {
            nums1[right] = nums2[flag2];
            flag2--;
        }
        right--;
    }
    for (auto i : nums1)
    {
        cout << i << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    vector<int> nums1, nums2;
    cin >> n >> m;
    for (int i = 0; i < m + n; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int j = 0; j < n; j++)
    {
        int a;
        cin >> a;
        nums2.push_back(a);
    }
    Merge(nums1, m, nums2, n);
    return 0;
}