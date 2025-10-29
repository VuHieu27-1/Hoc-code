#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string tong(string a, string b)
{
    string tong = "";
    int du = 0;
    int t = 0;
    while(a.length() > b.length())
    {
        b = "0" + b;
    }
    while(a.length() < b.length())
    {
        a = "0" + a;
    }
    for (int i = a.length() - 1; i >= 0; i--)
    {
        t = (a[i] - 48) + (b[i] - 48) + du;
        if(t >= 10)
        {
            t = ((a[i] - 48) + (b[i] - 48) + du) % 10;
        }
        du = ((a[i] - 48) + (b[i] - 48) + du) / 10;
        tong += (char)(t + 48);
    }
    reverse(tong.begin(), tong.end());
    if(du > 0)
    {
        tong = (char)(du + 48) + tong;
    }
    return tong;
}
vector<int> plusOne(vector<int>& digits) {
    string m = "";
    for (int i = 0; i < digits.size(); i++)
    {
        m = m + (char)(digits[i] + 48);
    }
    string b = "1";
    string dapan = tong(m, b);
    vector<int> c;
    for (int i = 0; i < dapan.length(); i++)
    {
        c.push_back((dapan[i] - 48));
    }
    return c; 
}
int main()
{
    vector<int> m = {4,2,1};
    vector<int> dapan = plusOne(m);
    int index;
    for (int i = 0; i < dapan.size(); i++)
    {
        index = dapan.size() - 1;
        cout << dapan[i];
        if(i == index)
        {
            break;
        }
        cout << ",";
    }
}