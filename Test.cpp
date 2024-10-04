#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void chen(float *&a, int &n, int k, int s)
{
    float *newA = new float[n + 1];
    for (int i = 0; i < k; i++)
    {
        newA[i] = a[i];
    }
    newA[k] = s;
    for (int i = k; i < n; i++)
    {
        newA[i + 1] = a[i];
    }
    delete[] a;
    a = newA;
    n++;
}
void sortNegative(float *a, int n)
{
    // Tạo một vector để chứa các số âm
    vector<float> negatives;

    // Lưu các số âm vào vector
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            negatives.push_back(a[i]);
        }
    }

    // Sắp xếp vector chứa các số âm
    sort(negatives.begin(), negatives.end());

    // Thay thế các số âm trong mảng gốc bằng các số trong vector đã sắp xếp
    int negIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            a[i] = negatives[negIndex++];
        }
    }
}
int main()
{
    int n;
    cout << "nhap so luong phan tu:";
    cin >> n;
    float *a = new float[n];
    cout << "nhap cac phan tu cua mang :";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // int k, s;
    // cout << "nhap vi tri k : ";
    // cin >> k;
    // cout << "nhap gia tri can them";
    // cin >> s;
    // chen(a, n, k, s);
    // cout << "mang sau khi them phan tu la : ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << "  ";
    // }
    // cout << endl;
    sortNegative(a, n);
    cout << "mang sau khi sap xep cac so am tang dan la : ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }
    delete[] a;
    return 0;
}