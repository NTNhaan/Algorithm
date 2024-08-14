#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle)
{
    if (haystack.size() < needle.size() || haystack.size() == 0 || needle.size() == 0)
        return -1;
    int target = needle.size();
    for (int i = 0; i <= haystack.size() - needle.size(); i++)
    {
        if (haystack.substr(i, target) == needle)
            return i;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string haystack, needle;
    cin >> haystack >> needle;
    cout << strStr(haystack, needle);
    return 0;
}