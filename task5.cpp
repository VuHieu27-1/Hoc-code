#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long n, d, dem = 0, m;
    vector<int> digits; 
    long long tong = 0;
    cin >> n;
    m = n;
    while(n != 0)
    {
        d = n % 10;
        digits.push_back(d);
        dem++;
        n /= 10;
    }
    for (int i = 0; i < digits.size(); i++)
    {
        tong += pow(digits[i], dem);
    }
    if(tong == m)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}