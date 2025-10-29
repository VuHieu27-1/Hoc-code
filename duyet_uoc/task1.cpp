#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long n, dem = 0, dem1 = 0;
    vector<long long> a;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            a.push_back(i);
            if(i != n / i)
                a.push_back(n / i);
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if(sqrt(a[i]) == (long long)sqrt(a[i]))
        {
            cout << a[i] << " ";
        }
    }
}