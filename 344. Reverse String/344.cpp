#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> s)
{
    for (int i = s.size() - 1; i >= 0; i--)
    {
        cout << s[i] << " ";
    }
}
void reverseV2(vector<char> s)
{
    reverse(s.begin(), s.end());
    for (char i : s)
    {
        cout << i << " ";
    }
}
void reverseV3(vector<char> &s)
{
    int left = 0;
    int right = s.size() - 1;
    while (left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<char> tmp;
    while (n--)
    {
        char x;
        cin >> x;
        tmp.push_back(x);
    }
    reverseV3(tmp);
    return 0;
}