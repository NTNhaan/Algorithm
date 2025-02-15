#include <bits/stdc++.h>

using namespace std;

int countSegments(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    string s;
    getline(cin, s);
    cout << countSegments(s);
    return 0;
}