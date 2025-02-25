#include <bits/stdc++.h>

using namespace std;

bool detectCapitalUse(string word)
{ // kiểm tra các chữ có viết hoa đúng cách không
    int n = word.size();
    if (n == 1)
        return true;
    // case 1: tất cả các chư phải viết hoa
    if (isupper(word[0]) && isupper(word[1]))
    {
        for (int i = 2; i < n; i++)
        {
            if (!isupper(word[i]))
                return false;
        }
    }
    else // case 2: các ký tự còn lại phải viết thường
    {
        for (int i = 1; i < n; i++)
        {
            if (isupper(word[i]))
                return false;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin, s);
    bool ans = detectCapitalUse(s);
    cout << (ans ? "true" : "false");
    return 0;
}