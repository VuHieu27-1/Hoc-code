#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
#include<map>
#include<unordered_map>
using namespace std;
long long dem [10000000];
void sanguoc(int n, int a)
{
    int res = 0;
    for (int index = 2; index <= n; index++)
    {
        long long sum = 0;
        for (int i = index; i <= n; i += index)
        {
            sum += dem[i];
        }
        if(sum >= a)
        {
            res = index;
        }
    }
    if(res > 0)
    {
        cout << res << endl;
    }else
    {
        cout << 1 << endl;
    }
}
int main()
{
    int n, a, max = INT_MIN, res = 0;
    cin >> n >> a;
    vector<long long> c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(c[i] > max)
        {
            max = c[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        dem[c[i]]++;
    }
    sanguoc(max, a);
}