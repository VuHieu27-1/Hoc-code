#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long n;
    vector<long long> a;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            a.push_back(i);
            if(i != n/i)
            {
                a.push_back(n/i);
            }
        }
    }
    sort(a.begin(), a.end());
    // for (int i = 0; i < a.size(); i ++) cout << a[i] << endl;
    for (int i = 0; i < a.size(); i ++)
    {
        if(a[i] < n / a[i])
        cout << a[i] << " " << n / a[i] << endl;
    }
}