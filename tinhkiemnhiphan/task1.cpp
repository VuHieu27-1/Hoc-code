#include<iostream>
#include<math.h>
#include<climits>
#include<vector>
using namespace std;
int timkiem(int n, vector<int> &a)
{
    int l = 0;
    int r = a.size() - 1;
    int kq = INT_MIN;
    int mid;
    while(l <= r)
    {
        mid = (l + r)/2;
        if(a[mid] == n)
        {
            r = mid - 1;
        }
        if(a[mid] > n)
        {
            r = mid - 1;
        }
        if(a[mid] < n)
        {
            kq = mid;
            l = mid + 1;
        }
    }
    if(kq != INT_MIN)
        return kq + 1;
    return -1;
}
int timkiem1(int n, vector<int> &a)
{
    int l = 0;
    int r = a.size() - 1;
    int kq = INT_MIN;
    int mid;
    while(l <= r)
    {
        mid = (l + r)/2;
        if(a[mid] == n)
        {
            l = mid + 1;
        }
        if(a[mid] > n)
        {
            kq = mid;
            r = mid - 1;
        }
        if(a[mid] < n)
        {
            l = mid + 1;
        }
    }
    if(kq != INT_MIN)
        return kq + 1;
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, b;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    cin >> b;
    vector<int> c(b);
    for (int i = 0; i < c.size(); i++)
    {
        cin >> c[i];
    }
    for (auto x : c)
    {
        cout << timkiem(x, a) << " ";
        cout << timkiem1(x, a) << endl;
    }
    
}