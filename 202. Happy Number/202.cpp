#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n)
{
    unordered_set<int> tmp;
    while (tmp.find(n) == tmp.end())
    {
        tmp.insert(n);
        int result = 0;
        while (n > 0)
        {
            int flag = n % 10;
            result += flag * flag;
            n /= 10;
        }
        if (result == 1)
        {
            return true;
        }
        n = result;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    isHappy(n) ? cout << "true" : cout << "false";
    return 0;
}