#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
string convert(long long p)
{
    string so = "";
    int du;
    while(p != 0)
    {
        du = p % 10;
        char w = du + 48;
        so = so + w;
        p /= 10;
    }
    reverse(so.begin(), so.end());
    return so;
}
string in(string a)
{
    long long dem = 1;
    string ketqua = "";
    string so = "";
    for (int i = 1; i < a.size(); i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z' || (a[i] == ' ' && a[i - 1] >= 'A' && a[i - 1]))
        {
            if(a[i] == a[i - 1])
            {
                dem++;
            }else
            {
                so = convert(dem);
                cout << so << endl;
                if(a[i - 1] == ' ')
                {
                    so = "";
                }
                ketqua += so + a[i - 1];
                dem = 1;
                so = "";
            }
        }
    }
    return ketqua;
}
int main()
{
    string a;
    getline(cin,a);
    a = a + ' ';
    cout << in(a);
}
