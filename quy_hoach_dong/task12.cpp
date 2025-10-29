#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    vector <vector<int>> a(n);
    for(int i = 0; i < n; i++)
    {
        a[i].resize(2);
        cin >> a[i][0] >> a[i][1];
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i][0] << " " << a[i][1] << endl;
    }
}