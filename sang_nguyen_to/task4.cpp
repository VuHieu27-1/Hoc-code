#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include <climits>
using namespace std;
vector<long long> b;
void sangnt (long long a)
{
    b.resize(a + 1, 1);
    b[0] = b[1] = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(b[i] == 1)
        {
            for (int j = i * i; j <= a; j += i)
            {
                
                b[j] = 0;
            }
        }
    }
}
int main()
{
    long long a, max = LLONG_MIN;
    long long ngtmax = LLONG_MIN;
    long long tong = 0;
    cin >> a;
    vector<long long> c(a);
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < a; i++)
    {
        if(c[i] > max)
        {
            max = c[i];
        }
    }
    sangnt(max);
    for (int i = 0; i < a; i++)
    {
        if(b[c[i]] == 0 && c[i] > ngtmax)
        {
            ngtmax = c[i];
        }
    }
    if (ngtmax == LLONG_MIN || ngtmax == 1)
    {
        cout << -1 << endl;
    }else
    {
        cout << ngtmax << endl;
    }
}