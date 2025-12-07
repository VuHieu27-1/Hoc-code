#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
int convert(string p)
{
    int so = 0;
    for (int i = 0; i < p.size(); i++)
    {
        so = so * 10 + (p[i] - 48);
    }
    return so;
}
long long in (string a)
{
    string p = "";
    char p1 = '+';
    long long tong = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != '+' && a[i] != '-')
        {
            p = p + a[i];
        }else
        {
            if(p1 == '+')
            {
                tong += convert(p);
                cout << tong << endl;
            }else
            {
                tong -= convert(p);
                cout << tong << endl;
            }
            p = "";
            p1 = a[i];
        }
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
