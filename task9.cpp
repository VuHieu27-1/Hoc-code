#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long a,b, k_1, k_2, x_2, x_1, dem; 
    cin >> a >> b;
    x_1 = sqrt(a);
    x_2 = sqrt(b);
    if(x_1 * x_1 < a)
    {
        k_1 = x_1 + 1;
    }
    else
    {
        k_1 = x_1;  
    }
    cout << k_1 << " " << x_2 << endl;
    dem = x_2 - k_1 + 1;
    cout << dem << endl;
    return 0;
}