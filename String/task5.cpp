#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool sosanh(char a, char b)
{
    if((a - 48) % 5 != 0 && (b - 48) % 5 == 0)
    {
        return true;
    }
    if((a - 48) % 5 == 0 && (b - 48) % 5 == 0 && a > b)
    {
        return true;
    }
    return false;
}
bool sosanh1(char a, char b)
{
    if(a > b)
    {
        return true;
    }
    return false;
}
string check(string a)
{
    sort(a.begin(), a.end(),sosanh);
    sort(a.begin(), a.end() - 1, sosanh1);
    if((a[a.size() - 1] - 48) % 5 != 0)
    {
        return "-1";
    }
    return a;
}
int main()
{
    string a;
    cin >> a;
    cout << check(a) << endl;
}
