#include <bits/stdc++.h>
using namespace std;

void twoSum(vector<int> &numbers, int target)
{
    int n = numbers.size();
    int i = 0, j = n - 1;
    vector<int> ans;
    while (i < j)
    {
        if (numbers[i] + numbers[j] == target)
        {
            ans.push_back(i + 1);
            ans.push_back(j + 1);
            break;
        }
        else if (numbers[i] + numbers[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums;
    while (n--)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    twoSum(nums, k);
    return 0;
}