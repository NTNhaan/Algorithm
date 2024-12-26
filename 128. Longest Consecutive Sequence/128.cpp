#include <bits/stdc++.h>
using namespace std;

// int longestConsecutive(vector<int> &nums)
// {
//     unordered_set<int> s;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         s.insert(nums[i]);
//     }
//     int ans = 0;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (s.find(nums[i] - 1) == s.end())
//         {
//             int j = nums[i];
//             while (s.find(j) != s.end())
//             {
//                 j++;
//             }
//             ans = max(ans, j - nums[i]);
//         }
//     }
//     return ans;
// }
int anotherSolution(vector<int> &nums)
{
    if (nums.empty())
        return 0;
    sort(nums.begin(), nums.end());

    int longestStreak = 1;
    int currentStreak = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] - nums[i - 1] == 1)
        {
            currentStreak++;
        }
        else
        {
            if (nums[i] != nums[i - 1])
            {
                longestStreak = max(longestStreak, currentStreak);
                currentStreak = 1;
            }
        }
    }

    return max(longestStreak, currentStreak);
}
int main()
{
    int n;
    cin >> n;
    vector<int> tmp;
    while (n--)
    {
        int x;
        cin >> x;
        tmp.push_back(x);
    }
    cout << anotherSolution(tmp);
    return 0;
}