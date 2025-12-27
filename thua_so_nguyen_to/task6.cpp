#include<iostream>
#include<vector>
#include<math.h>
#include <climits>
#include <map>
using namespace std;
void thuaso(long long a)
{
    int value = 2;
    map<long long, long long> dem;
    vector<long long> c;
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
    for (int i = 0; i < c.size(); i++)
    {
        dem[c[i]]++;
    }
    for(auto x : dem)
    {
        if(x.second > 1)
        {
            cout << -1;
            return;
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        if(i != c.size() - 1)
        {
            cout << c[i] << " * " ;
        }else
        {
            cout << c[i];
        }
    }
    
}
int main()
{
    long long a;
    cin >> a;
    if(a == 1)
    {
        cout << -1;
        return 0;
    }
    thuaso(a);
}