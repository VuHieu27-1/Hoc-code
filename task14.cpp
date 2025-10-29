#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long a, b, dem = 0, k_1, x_1, x_2, x_3 , tong = 0, dem_1, dem_2, dem_3;
    cin >> a;
    x_1 = a/3;
    x_2 = a/2;
    x_3 = a/6;
    cout << x_1 << " " << x_2 << " " << x_3 << endl;
    dem_1 = x_1 - 1/3;
    dem_2 = x_2 - 1/2;
    dem_3 = x_3 - 1/6;
    tong = dem_1 + dem_2 - dem_3;
    cout << tong << endl;
    return 0;
}