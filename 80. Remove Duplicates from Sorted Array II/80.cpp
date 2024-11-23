#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    if (n <= 2)
        return n;
    int i = 2;
    for (int j = 2; j < n; j++)
    {
        if (nums[j] != nums[i - 2])
        {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}
int anotherSolution(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] <= 2)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << anotherSolution(nums);
    return 0;
}