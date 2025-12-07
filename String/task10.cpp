#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
bool sosanh(string a, string b)
{
    while(a.length() > b.length())
    {
        b = "0" + b;
    }
    while(a.length() < b.length())
    {
        a = "0" + a;
    }
    // cout << a << " " << b << endl;
    if(a > b)
    {
        return true;
    }
    return false;
}
string in(string a)
{
    string p = "";
    bool check = false;
    string max = "";
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] >= 48 && a[i] <= 57)
        {
            check = true;
            p = p + a[i];
        }else
        {
            if(sosanh(p, max))
            {
                max = p;
            }
            p = "";
        }
    }
    while(max[0] == '0')
    {
        max.erase(0, 1);
    }
    if (check == true)
    {
        return max;
    }
    return "-1";
}
int main()
{
    string a;
    getline(cin,a);
    a = a + ' ';
    cout << in(a);
}
