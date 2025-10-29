#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    string n;
    int m; 
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int del = n.size() - 1;
        for (int j = 0; j <= n.size() - 2; j++)
        {
            if(n[j] < n[j + 1])
            {
                del = j;
                break;
            }
        }
        n.erase(del,1);
    }
    cout << n;
    return 0;
}