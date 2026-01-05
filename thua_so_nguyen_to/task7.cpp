#include<iostream>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
bool check(int a)
{
    for(int i = 2; i <= sqrt(a); i++)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}
long long sonhan(long long a, long long b)
{
    vector<long long> c;
    map<long long, long long> dem;
    long long value = 2;
    long long tong = 1;
    int d = a;
    while(a != 1 && value <= sqrt(a))
    {
        if(a % value != 0)
        {
            value++;
        }else
        {
            c.push_back(value);
            a /= value;
        }
    }
    if(a > 1)
    {
        c.push_back(a);
    }
    for(int i = 0; i < c.size(); i++)
    {
        dem[c[i]]++;
    }
    for(auto x : dem)
    {
        tong *= (x.second + 1);
    }
    long long x;
    x = (tong / (b - tong)) - 1;
    if(tong % (b - tong) != 0)
    {
        return -1;
    }
    if(x != 0)
    {
        for(auto y : dem)
        {
            if(x == y.second)
            {
                return y.first;
            }
        }
    }else
    {
        for(int i = 2; i <= 38; i++)
        {
            if(dem[i] == 0 && check(i))
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    long long n, k;
    cin >> n >> k;
    cout << sonhan(n, k);
}