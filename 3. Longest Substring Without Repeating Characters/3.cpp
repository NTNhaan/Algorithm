#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int Solve(string s)
{
    unordered_map<char, int> mp;
    int left = 0, right = 0, maxLegnth = 0;
    while (right < s.size())
    {
        mp[s[right]] += 1;
        while (mp[s[right]] > 1)
        {
            mp[s[left]] -= 1;
            left += 1;
        }
        maxLegnth = max(maxLegnth, right - left + 1);
        right += 1;
    }
    return maxLegnth;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    cout << Solve(s);
    return 0;
}