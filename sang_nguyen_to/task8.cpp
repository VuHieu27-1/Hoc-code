#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;
vector<long long> b;
long long gen(int len, int value) 
{
    long long res = 0;
    for (int i = 1; i <= len; i++)
        res = res * 10 + value;
    return res;
}
vector<int> sieu (int n)
{
    vector<int> so;
    int len = 1;
    int value = 1;
    while(true)
    {
        int num = gen(len, value);
        if(num > n)
        {
            break;
        }else{
            so.push_back(num);
        }
        value++;
        if(value == 10)
        {
            value = 1;
            len++;
        }
    }
    return so;
}
void sanguoc(vector<int> c, long long l)
{
    b.resize(l + 1, 0);
    for (int x : c)
    {
        for (int i = x; i <= l; i += x)
        {
            b[i]++;
        }
    }
    int max = 1, res = 1;
    for (int i = 1; i <= l; i++)
    {
        if(b[i] >= max)
        {
            max = b[i];
            res = i;
        }
    }
    cout << res << endl;
    for(int x : c)
    {
        if (x > res) break;
        if(res % x == 0)
        {
            cout << x << " ";
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long n;
    cin >> n ;
    vector<int> mang = sieu(n);
    sanguoc(mang, n);
}