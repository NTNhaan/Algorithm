#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

vector<string> letterCombinations(string digits)
{
    if (digits.empty())
        return {};
    unordered_map<char, string> listDigits{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}};
    vector<string> result;
    int totalCombinations = 1;
    for (char digit : digits)
    {
        totalCombinations *= listDigits[digit].size();
    }
    result.resize(totalCombinations);
    int repeat = totalCombinations;
    for (int i = 0; i < digits.size(); i++)
    {
        repeat /= listDigits[digits[i]].size();
        int index = 0;
        for (int j = 0; j < totalCombinations; j++)
        {
            result[j] += listDigits[digits[i]][index];
            if ((j + 1) % repeat == 0)
            {
                index = (index + 1) % listDigits[digits[i]].size();
            }
        }
    }
    return result;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string digits;
    cin >> digits;
    vector<string> ans = letterCombinations(digits);
    for (string s : ans)
    {
        cout << s << " ";
    }
    return 0;
}