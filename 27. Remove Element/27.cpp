#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int RemoveElement(vector<int> nums, int val)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + i);
            i--;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return nums.size();
}
int main()
{
    vector<int> nums;
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> val;
    RemoveElement(nums, val);
    return 0;
}