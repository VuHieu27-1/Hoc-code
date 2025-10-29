#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;
bool compare(int a, int b)
{
    if(a % 10 > b % 10)
    {
        return true;
    }
    if(a % 10 == b % 10 && a < b )
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), compare);
    for(auto x : a)
    {
        cout << x << " ";
    }
}