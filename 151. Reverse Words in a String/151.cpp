#include <bits/stdc++.h>
using namespace std;

string reverseWordsV2(string s)
{
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
    {
        words.push_back(word);
    }
    string tmp;
    for (int i = words.size() - 1; i >= 0; i--)
    {
        tmp += words[i];
        if (i != 0)
        {
            tmp += " ";
        }
    }
    return tmp;
}
void reverseWords(string s)
{
    string word = "";
    vector<string> words;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else
        {
            word += s[i];
        }
    }
    words.push_back(word);
    for (int i = words.size() - 1; i >= 0; i--)
    {
        cout << words[i] << " ";
    }
}
int main()
{
    string s;
    getline(cin, s);
    cout << reverseWordsV2(s);
    return 0;
}