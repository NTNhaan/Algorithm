#include <bits/stdc++.h>
using namespace std;

string addBinary(string a, string b)
{
    string ans;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    while (i >= 0 || j >= 0)
    {
        int sum = carry; // kiểm tra xem biến trước có nhớ ko thì bù vào biến này
        if (i >= 0)
        {
            sum += a[i] - '0';
            i--;
        }z  
        if (j >= 0)
        {
            sum += b[j] - '0'; // '0' is subtracted to convert char to int
            j--;
        }
        carry = (sum > 1) ? 1 : 0; // carry là tính số cần nhớ(Ex: 1+1 = 0 và nhớ 1 => carry = 1)
        ans += to_string(sum % 2); // nếu sum = 2 thì viết 0 nhớ 1, nếu sum = 1 thì viết 1 nhớ 0
    }
    if (carry != 0)
        ans += to_string(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}
int main()
{
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b);
    return 0;
}