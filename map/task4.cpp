#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<math.h>
#include<unordered_map>
using namespace std;
long long tongso(vector<long long> a)
{
    long long demso = 0;
    long long demso1 = 0;
    long long demso2 = 0;
    long long c;
    long long index ;
    unordered_map<long long, long long> dem;
        unordered_map<long long, long long> dem1;
    for (int i = 0; i < a.size(); i++)
    {
        dem[a[i]]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        dem1[a[i]] = i;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(dem[a[i]] > 0)
        {
            if(a[i] % 3 == 0)
            {
                demso += dem[a[i]];
                dem[a[i]] = 0;
                
            }else if(a[i] % 3 == 1)
            {
                demso1 += dem[a[i]];
                dem[a[i]] = 0;
                
            }else
            {
                demso2 += dem[a[i]];
                dem[a[i]] = 0;
                
            }
        }
    }
    c = demso1 * demso2 + (demso * (demso - 1) / 2);
    return c;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n, a;
    cin >> n;
    vector<long long> dem(n);
    for (int i = 0; i < n; i++ )
    {
        cin >> dem[i];
    }
    cout << tongso(dem) << endl;
}