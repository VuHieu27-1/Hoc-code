#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int max(int a)
{
    int max = INT_MIN;
    while(a != 0)
    {
        int dem = a % 10;
        if(dem > max)
        {
            max = dem;
        }
        a /= 10;
    }
    return max;
}
bool tong(int a, int b)
{
    if(max(a) > max(b))
    {
        return true;
    }
    if(max(a) == max(b) && a > b )
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