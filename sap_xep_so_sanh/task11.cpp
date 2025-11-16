#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
bool check(char a)
{
    if(a > 64 && a < 91)
    {
        return true;
    }
    return false;
} 
bool check1(char a)
{
    if(a > 47 && a < 58)
    {
        return true;
    }
    return false;
}
bool check2(char a)
{
    if(a > 96 && a < 123)
    {
        return true;
    }
    return false;
}
bool chu(string a, string b)
{
    if(a[0] < b[0])
    {
        return true;
    }
    if(check(a[0]) && check(b[0]) && a < b )
    {
        return true;
    }
    if(check1(a[0]) && check1(b[0]) && a < b )
    {
        return true;
    }
    if(check2(a[0]) && check2(b[0]) && a < b )
    {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a;
    cin >> a;
    vector<string> b(a);
    for (int i = 0; i < a; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end(),chu);
    for (auto x : b)
    {
        cout << x << endl;
    }
}