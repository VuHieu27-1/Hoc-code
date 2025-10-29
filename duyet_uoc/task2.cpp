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
            if(i  > 9 && i < 100)
                dem++;
            if(i != n / i)
                if(n/i  > 9 && n/i < 100)
                dem++;
        }
    }
    cout << dem;
}