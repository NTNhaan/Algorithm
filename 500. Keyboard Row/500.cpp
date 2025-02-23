#include <bits/stdc++.h>

using namespace std;

vector<string> findWords(vector<string> &words)
{
    int n = words.size();
    vector<string> ans;
    vector<string> row = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    for (int i = 0; i < n; i++)
    {
        string tmp = words[i]; // hello
        int r = -1;
        for (int j = 0; j < 3; j++)
        {
            if (row[j].find(tolower(tmp[0])) != string::npos) // tìm thấy
            {
                r = j;
                break;
            }
        }
        bool check = true;
        for (int j = 1; j < tmp.size(); j++)
        {
            if (row[r].find(tolower(tmp[j])) == string::npos) // không tìm thấy
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            ans.push_back(tmp);
        }
    }
    return ans;
}
int main()
{
    string s;
    vector<string> word;
    getline(cin, s);
    stringstream ss(s);
    string token;
    while (getline(ss, token, ' '))
    {
        word.push_back(token);
    }
    vector<string> ans = findWords(word);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}