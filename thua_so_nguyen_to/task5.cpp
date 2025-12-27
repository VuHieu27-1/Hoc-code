#include<iostream>
#include<vector>
#include<math.h>
#include <climits>
#include <map>
using namespace std;
void thuaso(long long a)
{
    int value = 2;
    map<long long, int> dem;
    vector<long long> c;
    long long tong = 1;
    int index = 1;
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
        tong *= (x.second + 1);
    }
    cout << tong << endl;
}
int main()
{
    long long a;
    cin >> a;
    thuaso(a);
}