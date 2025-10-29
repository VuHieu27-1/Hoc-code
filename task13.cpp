#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long a,b, k_1, k_2, x_2, x_1, x_3, x_4, dem1, dem2; 
    vector<long long> results;
    cin >> a >> b ;
    x_1 = sqrt(a/25);
    x_2 = sqrt(b/25); 
    x_3 = sqrt(a/9);
    x_4 = sqrt(b/9);
    if(25 * x_1 * x_1 < a)
    {
        k_1 = x_1 + 1;
    }
    else
    {
        k_1 = x_1;  
    }
    if(9 * x_3 * x_3 < a)
    {
        k_2 = x_3 + 1;
    }
    else
    {
        k_2 = x_3;  
    }
    for (long long i = k_1; i <= x_2; i++)
    {
    dem1 = i * i * 25 ;
    results.push_back(dem1);
    }
    for (long long i = k_2; i <= x_4; i++)
    {
    dem2 = i * i * 9 ;
    results.push_back(dem2);
    }
    sort(results.begin(), results.end());
    for (int i = 0; i < results.size(); i++)
    {
        if (results[i] != results[i + 1])
        {
            cout << results[i] << endl;
        }
    }        
    return 0;
}