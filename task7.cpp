#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long n, k, x, tim; 
    cin >> n;
    x = sqrt(n);
    if( x % 2 != 0)
    {
        k = x;
    }
    else
    {
        k = x - 1;
    }
    tim = k * k;
    cout << tim << endl;
    return 0;
}