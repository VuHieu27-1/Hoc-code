#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int x;
    cin >> x;
    vector<int> a(x);
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < x; i++)
    {
        if(a[i] % 2 == 0)
        {
            a.push_back(a[i] / 2);
        }else
        {
            a.push_back(a[i] * 3);
        }
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}