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
    x_1 = a/5;
    x_2 = sqrt(a);
    x_3 = sqrt(a / 25);
    cout << x_1 << " " << x_2 << " " << x_3 << endl;
    dem_1 = x_1 - 1/5;
    dem_2 = x_2;
    dem_3 = x_3 - 1/5;
    cout << dem_1 << " " << dem_2 << " " << dem_3 << endl;
    tong = dem_1 + dem_2 - dem_3;
    cout << tong << endl;
    return 0;
}