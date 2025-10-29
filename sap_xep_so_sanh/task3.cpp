#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int demso(int a)
{
    int dem = 0;
    while(a != 0)
    {
        a /= 10;
        dem++;
    }
    return dem;
}
bool tong(int a, int b)
{
    if(demso(a) < demso(b))
    {
        return true;
    }
    if(demso(a) == demso(b) && a > b )
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