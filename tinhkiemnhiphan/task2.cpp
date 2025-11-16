#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
bool tim(vector<int> a ,int b)
{
    int l = 0;
    int r = a.size();
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == b)
        {
            return true;
        }
        if(a[mid] > b)
        {
            r = mid - 1;
        }        
        if(a[mid] < b)
        {
            l = mid + 1;
        }
    }
    return false;
}
int main()
{
    int n, so;
    cin >> n >> so;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }
    if (tim(a, so))
    {
        cout << " YES " << endl;
    }else{
        cout << " NO " << endl;
    }
}