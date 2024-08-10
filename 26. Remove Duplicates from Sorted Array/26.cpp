#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int pos = 0;
    int currunValue = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        if (currunValue != nums[i])
        {
            currunValue = nums[i];
            nums[pos++] = currunValue;
        }
    }
    return pos;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<int> nums;
    vector<int> ans;
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    removeDuplicates(nums);
    return 0;
}