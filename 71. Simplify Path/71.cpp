#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string path)
{
    stack<string> st;
    string ans;
    int size = path.size();
    for (int i = 0; i < size; i++)
    {
        if (path[i] == '/')
            continue;
        string tmp;
        while (i < size && path[i] != '/')
        {
            tmp += path[i];
            i++;
        }
        if (tmp == ".")
            continue;
        else if (tmp == "..")
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
            st.push(tmp);
    }
    while (!st.empty())
    {
        ans = '/' + st.top() + ans;
        st.pop();
    }
    if (ans.size() == 0)
    {
        return "/";
    }
    return ans;
}
int main()
{
    string path;
    getline(cin, path);
    cout << simplifyPath(path);
    return 0;
}