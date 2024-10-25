#include <bits/stdc++.h>
using namespace std;

int hammingWeight(int n)
{
    int tmp = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((n >> i) & 1)
        {
            tmp += 1;
        }
    }
    return tmp;
}
int main()
{
    int n;
    cin >> n;
    cout << hammingWeight(n);
    return 0;
}