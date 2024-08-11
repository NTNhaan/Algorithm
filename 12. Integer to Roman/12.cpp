#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    string res = "";
    string roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for (int i = 0; i < 13; i++)
    {
        while (num >= val[i])
        {
            num -= val[i];
            res += roman[i];
        }
    }
    cout << res;
    return 0;
}