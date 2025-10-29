#include<iostream>
#include<climits>
using namespace std;
int main()
{
    long long n, d, dem= 0;
    cin >> n;
    long long min = INT_MAX;
    long long m = n;
    if(n <= 0)
    {
        min = 0;
        cout << min << endl;
        cout << "1" << endl;
    }
    else{
    while(n != 0)
    {
        d = n % 10;
        if(d < min)
        {
            min = d;
        }
        n /= 10;
    }
    while(m != 0)
    {
        d = m % 10;
        if(d == min)
        {
            dem++;
        }
        m /= 10;
    }
    cout << min << endl;
    cout << dem << endl;
    }
    return 0;
}