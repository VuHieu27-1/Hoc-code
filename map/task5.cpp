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
    long long demso1 = 1;
    long long demso2 = 0;
    long long c;
    long long index = 0;
    unordered_map<long long, long long> dem;  
    for (int i = 0; i < a.size(); i++)
    {
        dem[a[i] % b]++;
    }
    for (auto x : dem)
    {
        if (x.first == 0)
        {
            demso2 += x.second * (x.second - 1) / 2;
        }
        else
        {
            demso1 += x.second * dem[b - x.first];
        }
    }
    c = demso2 + demso1/2;
    return c;
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
    cout << tongso(dem, a) << endl;
    return 0;
}