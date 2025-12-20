#include<iostream>
#include<string>
#include<vector>
using namespace std;
string xuly (long long a, char b)
{
    string chuoi = "";
    for (int i = 0; i < a; i++)
    {
        chuoi = chuoi + b; 
    }
    return chuoi;
}
string in(string a)
{
    string so = "";
    string chuoi;
    long long x = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            x = x * 10 + (a[i] - 48);
        }else 
        {
            chuoi += xuly(x, a[i]);
            x = 0;
        }
        
    }
    return chuoi;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string a;
    getline(cin, a);
    cout << in(a) << endl;
}
