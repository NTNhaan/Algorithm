#include <bits/stdc++.h>

using namespace std;

string reverseWords(string s)
{
    istringstream iss(s);
    string tmp;
    string ans = "";
    while (iss >> tmp)
    {
        reverse(tmp.begin(), tmp.end());
        if (!ans.empty())
            ans += " ";
        ans += tmp;
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverseWords(s);
    return 0;
}