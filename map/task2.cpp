#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<unordered_map>
using namespace std;
long long bang(vector<long long> a)
{
    long long tong = 0;
    unordered_map<long long, long long> dem;
    for (int i = 0; i < a.size(); i++)
    {
        dem[a[i]]++;
    }
    for(auto x : dem)
    {
        tong += x.second * (x.second - 1) / 2;
    }
    return tong;
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> dem(n);
    for (int i = 0; i < n; i++ )
    {
        cin >> dem[i];
    }
    cout << bang(dem) << endl;
}