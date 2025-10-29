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
        for(int j = 0; j < b.size(); j++)
        {
            cout << b[j] << " ";
        }
        cout << endl;
    }
        return 0;
}