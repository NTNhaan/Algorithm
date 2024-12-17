#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

// if current starting time is less than ending time in previous interval.
// they are overlapping.
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    if (intervals.empty())
        return {};

    sort(intervals.begin(), intervals.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[0] < b[0]; });

    vector<vector<int>> merged;
    vector<int> prev = intervals[0];

    for (int i = 1; i < intervals.size(); ++i)
    {
        vector<int> interval = intervals[i];
        if (interval[0] <= prev[1])
        {
            prev[1] = max(prev[1], interval[1]);
        }
        else
        {
            merged.push_back(prev);
            prev = interval;
        }
    }
    merged.push_back(prev);
    return merged;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> tmp;
    while (n--)
    {
        vector<int> flag(2);
        int a, b;
        cin >> a >> b;
        flag[0] = a;
        flag[1] = b;
        tmp.push_back(flag);
    }
    vector<vector<int>> ans = merge(tmp);
    for (const auto &interval : ans)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    return 0;
}