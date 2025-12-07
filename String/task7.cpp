#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
string xoa(string &a, int du)
{
    int index;
    for (int i = 0; i < a.size(); i++)
    {
        if((a[i] - '0') % 3 == du)
        {
            index = i;
        }
    }
    if (a.size() <= 1)
        return "-1";
    for (int i = 0; i < a.size() - 1; i++)
    {
        if( (a[i] - '0') % 3 == du && a[i] < a[i + 1] )
        {
            index = i;
            break;
        }
    }
    a.erase(index, 1);
    return a;
}
string so(string a)
{
    int tong = 0;
    bool check1 = false;
    bool check2 = false;
    for (int i = 0; i < a.size(); i++)
    {
        tong += (a[i] - 48);
        if((a[i] - 48) % 3 == 1)
        {
            check1 = true;
        }
        if((a[i] - 48) % 3 == 2)
        {
            check2 = true;
        }
    }
    if(tong % 3 == 0)
    {
        return a;
    }else if(tong % 3 == 1)
    {
        if (check2 == false && check1 == false)
        {
            return "-1";
        }
        else if (check1 == true)
        {
            a = xoa(a, 1);
        }else{
            for (int i = 1; i <= 2; i++)
            {
                a = xoa(a, 2);   
            }
        }
    }else if(tong % 3 == 2)
    {
        if (check2 == false && check1 == false)
        {
            return "-1";
        }
        if(check2 == true )
        {
            a = xoa(a, 2);
        }else{
            for (int i = 1; i <= 2; i++)
            {
                a = xoa(a, 1);   
            }
        }
    }
    return a;
}
int main()
{
    string a;
    cin >> a;
    cout << so(a);
}