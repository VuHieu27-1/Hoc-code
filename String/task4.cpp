#include<iostream>
#include<string>
using namespace std;
string check(string a)
{
    int i = 1;
    while (a.length() > 0)
    {
        if ((a[a.size() - 1] - 48) != 0 && (a[a.size() - 1] - 48) != 5)
        {
            a.erase(a.size() - i);
        }else{
            break;
        }
    }
    if(a != "")
    {
        return a;
    }
    return "-1";
}
int main()
{
    string a;
    cin >> a;
    cout << check(a) << endl;
}
