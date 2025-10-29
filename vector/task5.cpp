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
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < a.size(); i++)
    {
        if(i % 2 == 0)
        {
            b.insert(b.begin(), a[i]);
        }else{
            b.push_back(a[i]);
        }
    }
    for(int i = 0; i < a.size(); i++)
    {
        for(int j = 0; j < b.size(); j++)
        {
            if(a[i] == b[j])
            {
                c.push_back(b[j]);
                break;
            }
        }
    }
    for(int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}