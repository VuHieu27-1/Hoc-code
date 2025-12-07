#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
string tinhtong (string a, string b)
{
    string t = "";
    int tong = 0;
    int du = 0;
    while(a.length() > b.length())
    {
        b = '0' + b;
    }
    while(a.length() < b.length())
    {
        a = '0' + a;
    }
    for (int i = a.size() - 1; i >= 0; i--)
    {
        tong = ((a[i] - 48) + (b[i] - 48)) + du;
        if(tong >= 10)
        {
            tong = (((a[i] - 48) + (b[i] - 48)) + du) % 10;
        }
        du = (((a[i] - 48) + (b[i] - 48)) + du) / 10;
        t += (char)(tong + 48);
        
    }
    reverse(t.begin(), t.end());
    if(du > 0)
    {
        t = (char)(du + 48) + t ;
    }
    return t;
}
string in (string a)
{
    string p = "";
    string p1 = "";
    string tong = "";
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != '+')
        {
            p = p + a[i];
        }else
        {
            tong = tinhtong(p, tong);
            p = "";
        }
    }
    if(tong == "0")
    {
        return tong;
    }
    while(tong[0] == '0')
    {
        tong.erase(0, 1);
    }
    return tong;
}       
int main()
{
    string a, b;
    getline(cin, a);
    a = a + '+';
    cout << in(a) << endl;
}
