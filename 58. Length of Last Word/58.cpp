#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) // Length of last word in a string
{
    int right = s.length() - 1;
    while (right >= 0 && s[right] == ' ')
    {
        right--;
    }
    int left = right;
    while (left >= 0 && s[left] != ' ')
    {
        left--;
    }
    return right - left;
}
int main()
{
    string s;
    cin >> s;
    int ans = 0;
    cout << lengthOfLastWord(s);
    return 0;
}