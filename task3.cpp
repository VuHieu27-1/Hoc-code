#include<iostream>
#include<climits>
using namespace std;
int main()
{
    long long m, n, d, res= 0;
    cin >> n;
     m = n;
    while(n != 0)
    {
        d = n % 10;
        res = res * 10 + d;
        n /= 10;
    }
    if (res == m)
    {  
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}