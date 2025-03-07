#include <bits/stdc++.h>

using namespace std;

vector<string> findRestaurant(vector<string> &list1, vector<string> &list2)
{
    unordered_map<string, int> mp;
    for (int i = 0; i < list1.size(); i++)
    {
        mp[list1[i]] = i;
    }
    vector<string> ans;
    int minIndex = INT_MAX;
    for (int i = 0; i < list2.size(); i++)
    {
        if (mp.find(list2[i]) != mp.end()) // kiểm tra chuỗi có tồn tại ở cả 2 list không
        {
            if (i + mp[list2[i]] < minIndex)
            {
                ans.clear();
                // để xoá đi các phần tử chưa phải là nhỏ nhất
                ans.push_back(list2[i]);
                minIndex = i + mp[list2[i]];
                // update minIndex để lấy được giá trị nhỏ nhất là 1
            }
            else if (i + mp[list2[i]] == minIndex)
            { // thì khi có giá trị tiếp theo mà cũng bằng 1 thì thêm vào ans
                ans.push_back(list2[i]);
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<string> list1;
    vector<string> list2;
    while (n--)
    {
        string x;
        cin >> ws; // bỏ qua các ký tự khoảng trắng trước khi đọc chuỗi từ đầu vào
        getline(cin, x);
        list1.push_back(x);
    }
    cin >> n;
    while (n--)
    {
        string x;
        cin >> ws;
        getline(cin, x);
        list2.push_back(x);
    }
    vector<string> ans = findRestaurant(list1, list2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}