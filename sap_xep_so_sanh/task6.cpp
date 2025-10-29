#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
bool chinhphuong(long long a)
{
    long long x = (long long)sqrt(a);   
     if(x * x == a)
        return true;
     return false;
}
bool tong(long long a, long long b)
{
    if(chinhphuong(a) && !chinhphuong(b))
    {
        return true;
    }
    if(chinhphuong(a) && chinhphuong(b) && a < b )
    {
        return true;
    }
    if(!chinhphuong(a) && !chinhphuong(b) && a < b)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
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