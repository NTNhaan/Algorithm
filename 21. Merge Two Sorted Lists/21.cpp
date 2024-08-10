#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *newNode(int val)
{
    ListNode *temp = new ListNode();
    temp->val = val;
    temp->next = NULL;
    return temp;
}
ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
{
    vector<int> v;
    while (l1 != NULL)
    {
        v.push_back(l1->val);
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        v.push_back(l2->val);
        l2 = l2->next;
    }
    sort(v.begin(), v.end());
    ListNode *head = new ListNode();
    ListNode *temp = head;
    for (int i : v)
    {
        temp->next = newNode(i);
        temp = temp->next;
    }
    return head->next;
}
void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    ListNode *l1 = new ListNode();
    ListNode *l2 = new ListNode();
    ListNode *temp1 = l1;
    ListNode *temp2 = l2;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        temp1->val = x;
        if (i != n - 1)
        {
            temp1->next = new ListNode();
            temp1 = temp1->next;
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        temp2->val = x;
        if (i != m - 1)
        {
            temp2->next = new ListNode();
            temp2 = temp2->next;
        }
    }
    ListNode *mergedList = mergeTwoLists(l1, l2);
    if (mergedList == NULL)
    {
        cout << "NULL" << endl;
        return 0;
    }
    printList(mergedList);
    return 0;
}