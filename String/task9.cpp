#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
string in(string a)
{
    string p = "";
    string max = "";
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != ' ')
        {
            p = p + a[i];
        }else
        {
            if(p.size() >= max.size())
            {
                max = p;
                cout << p;
            }
            p = "";
        }
    }
    return max;
}
int main()
{
    string a;
    getline(cin,a);
    a = a + ' ';
    cout << in(a);
}
