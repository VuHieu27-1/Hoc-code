#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string binary(long long n)
{
    string tong;
    int du;
    while(n > 0)
    {
        du = n % 2;
        n /= 2;
        tong += (char)(du + 48);
    }
    reverse(tong.begin(), tong.end());
    return tong;
}
int main()
{
    long long n;
    cin >> n;
    cout << binary(n) << endl;
}