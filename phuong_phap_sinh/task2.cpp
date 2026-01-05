#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long n, k , x ,f;
    cin >> n >> k;
    
    if(n % k == 0)
    {
        x = n / k;
    }else{
        x = (n / k) + 1;
    }
    f = x * k;
    cout << f << endl;
}
