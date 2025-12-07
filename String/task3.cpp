#include<iostream>
#include<string>
using namespace std;
bool check(string a)
{
    string chu = "";
    for (int i = a.size() - 1; i >= 0; i--)
    {
        chu = chu + a[i];
    }
    if(chu == a)
    {
        return true;
    }
    return false;
}
int main()
{
    string a;
    cin >> a;
    if(check(a))
    {
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}
