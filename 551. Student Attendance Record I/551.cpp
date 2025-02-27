#include <bits/stdc++.h>

using namespace std;

bool checkRecord(string s)
{
    int Absent = 0;
    int Late = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            Absent++;
            if (Absent > 1)
            {
                return false;
            }
        }
        if (s[i] == 'L')
        {
            Late++;
            if (Late > 2)
            {
                return false;
            }
        }
        else
        {
            Late = 0;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s);
    bool ans = checkRecord(s);
    cout << (ans ? "true" : "false");
    return 0;
}