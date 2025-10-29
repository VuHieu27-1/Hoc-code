#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int so_dau(int a)
{
    int so = 0;
    if(a < 10)
    {
        return a;
    }
    while(a < 0 || a >= 10)
    {
    so = a / 10;
    a /= 10;
    }
    return so;
}
int so_cuoi(int a)
{
    int so = a % 10;
    return so;
}
bool compare(int a, int b)
{
    if(so_dau(a) < so_dau(b))
    {
        return true;
    }
    if(so_dau(a) == so_dau(b) && so_cuoi(a) > so_cuoi(b))
    {
        return true;
    }
    if(so_dau(a) == so_dau(b) && so_cuoi(a) == so_cuoi(b) && a < b )
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
    sort(a.begin(), a.end(), compare);
    for(auto x : a)
    {
        cout << x << " ";
    }
}