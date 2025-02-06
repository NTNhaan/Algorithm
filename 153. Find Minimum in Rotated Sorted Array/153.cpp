#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int> &nums)
{
    int n = nums.size();
    int tmp = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] < tmp)
        {
            tmp = nums[i];
        }
    }
    return tmp;
}
int anotherSolution(vector<int> &nums)
{
    int left = 0;
    int right = nums.size() - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        nums[mid] < nums[right] ? right = mid : left = mid + 1;
    }
    return nums[left];
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
    cout << anotherSolution(ans);
    return 0;
}