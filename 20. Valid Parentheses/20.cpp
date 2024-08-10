#include <stack>
#include <iostream>
using namespace std;
void Solve(string s){
    stack<char> st;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);  
        }
        else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            if(st.empty())
            {
                cout << "false" << endl;
                return;
            }
            if(s[i] == ')' && st.top() == '(')
            {
                st.pop();
            }
            else if(s[i] == '}' && st.top() == '{')
            {
                st.pop();
            }
            else if(s[i] == ']' && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                cout << "false" << endl;
                return;
            }
        }
    }
    if(st.empty())
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string str;
    cin >> str;
    Solve(str);
    return 0;
}