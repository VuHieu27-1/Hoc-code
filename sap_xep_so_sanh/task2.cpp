#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int tongso(int a)
{
    int tong = 0;
    while(a != 0)
    {
        tong += a % 10;
        a /= 10;
    }
    return tong;
}
bool tong(int a, int b)
{
    if(tongso(a) < tongso(b))
    {
        return true;
    }
    if(tongso(a) == tongso(b) && a > b )
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