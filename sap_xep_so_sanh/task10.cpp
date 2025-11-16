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
bool chuoi(char a, char b)
{
    if(check(a) && !check(b))
    {
        return true;
    }
    if(check(a) && check(b) && a < b)
    {
        return true;
    }
    if(check(a) && check1(b))
    {
        return true;
    }
    if (check1(a) && check1(b) && a > b)
    {
        return true;
    }
    if(!check2(a) && check2(b))
    {
        return true;
    }
    if(check2(a) && check2(b) && a < b)
    {
        return true;
    }
    return false;
}
int main()
{
    string a;
    cin >> a;
    sort(a.begin(), a.end(),chuoi);
    cout << a << endl;
}