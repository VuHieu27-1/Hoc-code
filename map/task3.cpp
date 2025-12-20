#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
#include<unordered_map>
using namespace std;
long long tongso(vector<long long> a, long long b)
{
    long long demso = 0;
    long long index ;
    unordered_map<long long, long long> dem;
    for (int  i = 0; i < a.size(); i++)
    {
        dem[a[i]] ++;
    }
    for (int i = 0; i < a.size();  i++)
    {      
        if(dem[a[i]] > 0)
        {
            if(a[i] == (b - a[i]))
            {
                demso += dem[a[i]] * (dem[a[i]] - 1) / 2;
                dem[a[i]] = 0;
            }else
            {
                demso += dem[a[i]] * dem[b - a[i]];
                dem[a[i]] = 0;
                dem[b - a[i]] = 0;
            }

        }
    }
    return demso;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, a;
    cin >> n >> a;
    vector<long long> dem(n);
    for (int i = 0; i < n; i++ )
    {
        cin >> dem[i];
    }
    cout << tongso(dem,a) << endl;
}