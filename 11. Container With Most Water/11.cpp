#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Solve(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1;
    int ans = 0;
    while (left != right)
    {
        ans = max(ans, min(arr[left], arr[right]) * (right - left));
        arr[left] < arr[right] ? left++ : right--;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << Solve(arr);
    return 0;
}