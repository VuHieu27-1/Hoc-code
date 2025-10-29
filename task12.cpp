#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long a,b, k_1, k_2, x_2, x_1, dem; 
    cin >> a >> b ;
    x_1 = sqrt(a/25);
    x_2 = sqrt(b/25); 
    if(25 * x_1 * x_1 < a)
    {
        k_1 = x_1 + 1;
    }
    else
    {
        k_1 = x_1;  
    }
    for (long long i = k_1; i <= x_2; i++)
    {
    dem = i * i * 25 ;
    cout << dem << endl;
    }
    return 0;
}