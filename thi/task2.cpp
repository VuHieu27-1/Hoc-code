#include <iostream>
#include <cmath>
#include <array>
#include <climits>
using namespace std;
int a[100000];
int main()
{
    int n, max = INT_MIN;
    int max_1 = INT_MIN;
    int max_2 = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_1 && a[i] < max)
        {
            max_1 = a[i];
        }
    }for (int i = 0; i < n; i++)
    {
        if (a[i] > max_2 && a[i] < max_1)
        {
            max_2 = a[i];
        }
    }
    if(max_2 < 0 )
    {
        cout << "No third largest element" << endl;
        return 0;
    }
    cout << max_2 << endl;
    return 0;   
}