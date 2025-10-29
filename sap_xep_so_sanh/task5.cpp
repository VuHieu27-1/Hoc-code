#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
bool phanloai(int a)
{
    if(a % 2 == 0)
    {
        return true;
    }
    return false;
}
bool tong(int a, int b)
{
    if(phanloai(a) && !phanloai(b))
    {
        return true;
    }
    if(phanloai(a) && phanloai(b) && a < b)
    {
        return true;
    }
    if(!phanloai(a) && !phanloai(b)&& a > b)
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), tong);
    for(auto x : a)
    {
        cout << x << " ";
    }
}