#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int phanloai(int a)
{
    if(a > 0)
    {
        return true;
    }
    return false;
}
bool compare(int a, int b)
{
    if(phanloai(a) && !phanloai(b))
    {
        return true;
    }
    if(phanloai(a) && phanloai(b) && a < b)
    {
        return true;
    }
    if(!phanloai(a) && !phanloai(b) && a > b)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != 0)
        {
            b.push_back(a[i]);
        }
    }
    sort(b.begin(), b.end(), compare);
    int index = 0;
    for(auto x : b)                 // Cách để giữ nguyên ví trí của số 0
    {
        while(a[index] == 0)
        {
            index++;
        }
        a[index] = x;
        index++;
    }
    for (auto x : a)
    {
        cout << x << " ";
    }
}