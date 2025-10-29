#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, tong = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] % 2 == 0)
        {
            tong += a[i];
        }
    }
    cout << tong << endl;
        return 0;
}