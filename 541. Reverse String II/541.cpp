#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k)
{// testcase khó hiểu vl. đọc chả hiểu mẹ gì. submit cho có éo biết đúng hay sai
    for (int i = 0; i < s.size(); i += 2 * k)
    {
        reverse(s.begin() + i, s.begin() + min(i + k, (int)s.size()));
    }
    return s;
}
int main()
{
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    cout << reverseStr(s, k);
    return 0;
}