#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string AddString (string num1, string num2)
{
    string tong = "";
    int du = 0;
    while (num1.length() < num2.length())
    {
        num1 = "0" + num1;
    }
    while (num2.length() < num1.length())
    {
        num2 = "0" + num2;
    }
    for (int i = num1.length() - 1; i >= 0  ; i--)
    {
        int t;
        t = (num1[i] - 48) + (num2[i] - 48) + du;
        if(t >= 10)
        {
            t = t % 10;
        }
        du = (((num1[i] - 48) + (num2[i] - 48) + du)/ 10) ;
        tong+= (char)(t + 48);
    }
    reverse(tong.begin(), tong.end());
    if(du > 0)
    {
        tong = (char)(du + 48) + tong;
    }
    else
        tong = tong;
    return tong;
}
string SubString (string num1, string num2)
{
    string tong = "";
    int du = 0;
    while (num1.length() < num2.length())
    {
        num1 = "0" + num1;
    }
    while (num2.length() < num1.length())
    {
        num2 = "0" + num2;
    }
    for (int i = num1.length() - 1; i >= 0  ; i--)
    {
        int t;
        t = (num1[i] - 48) - ((num2[i] - 48) + du);
        if(t < 0)
        {
            t = t + 10;
            du = 1;
        }else
        {
            du = 0;
        }
        cout << t << endl;
        tong+= (char)(t + 48);
    }
    reverse(tong.begin(), tong.end());
    while(tong[0] == '0')
    {
        if(tong.length() < 2)
        {
            return tong;
        }
        tong.erase(0, 1);
    }
    return tong;
}
int main()
{
    string nums1, nums2;
    cin >> nums1 >> nums2;
    cout << SubString(nums1, nums2) << endl;
}