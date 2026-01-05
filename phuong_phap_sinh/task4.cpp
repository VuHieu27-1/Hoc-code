#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n, k , x ,f;
    cin >> n;
    x = sqrt(n);
    if(x * x != n)
    {
        x = x + 1;
    }
    f = x * x;
    cout << f << endl;
}
