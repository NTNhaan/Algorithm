#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
string Solve(vector<string> strs)
{
    string ans = "";
    int n = strs.size();
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[n - 1];
    for (int i = 0; i < min(first.size(), last.size()); i++)
    {
        if (first[i] != last[i])
        {
            return ans;
        }
        ans += first[i];
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> strs;
    string str;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> str;
        strs.push_back(str);
    }
    string ans = Solve(strs);
    cout << ans << endl;
    return 0;
}