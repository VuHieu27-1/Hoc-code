#include <iostream>
#include <map>
#include <vector>
using namespace std;
int so(vector<int> a, int b)
{
    map<int, int> dem;
    for (int i = 0; i < a.size(); i++)
    {
        dem[a[i]]++;
    }
    for (int i = 1; i < b; i++)
    {
        if(dem[i] == 0)
        {
            return i;
        }
    }
    return a.size() + 1;
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
    cout << so(a, n) << endl;
}