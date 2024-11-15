#include <iostream>
#include <vector>
using namespace std;
int canCompleteCircuit(vector<int> &gas, vector<int> &cost)
{
    int totalGas = 0;
    int totalCost = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        totalGas += gas[i];
        totalCost += cost[i];
    }
    if (totalGas < totalCost)
    {
        return -1;
    }
    int cur = 0;
    int flag = 0;
    for (int i = 0; i < gas.size(); i++)
    {
        cur += gas[i] - cost[i];
        if (cur < 0)
        {
            cur = 0;
            flag = i + 1;
        }
    }
    return flag;
}
int main()
{
    vector<int> gas;
    vector<int> cost;
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        gas.push_back(temp);
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        cost.push_back(temp);
    }
    cout << canCompleteCircuit(gas, cost);
    return 0;
}