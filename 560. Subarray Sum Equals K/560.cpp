#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int> &nums, int k) // use prefix sum
{
    unordered_map<int, int> mp;
    int sum = 0, count = 0;
    mp[0] = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (mp.find(sum - k) != mp.end())
        // kiểm tra xem sum - k có tồn tại trong map ko
        {
            // nếu có tồn tại có nghĩa là có một mảng con từ vị trí hiện tại trở về trước có tổng bằng k
            // cập nhật biến count với số lần xuất hiện sum - k
            count += mp[sum - k];
        }
        mp[sum]++;
    }
    return count;
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
    cout << subarraySum(nums, k);
    return 0;
}