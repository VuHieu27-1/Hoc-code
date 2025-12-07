#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
string check(string a)
{
    int min = INT_MAX;
    int max = INT_MIN;
    int index = -1;
    int indexmin = 0;
    sort(a.begin(), a.end());
    if(a == "0")
    {
        return a;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if((a[i] - 48) != 0 && (a[i] - 48) < min)
        {
            min = (a[i] - 48);
            indexmin = i;
        }
    }
    char d = min + 48;
    if ((a[0] - 48) == 0)
    {
        a.erase(indexmin,1);
        a = d + a;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if((a[i] - 48) % 5 == 0 && (a[i] - 48) > max)
        {
            max = (a[i] - 48);
            index = i;
        }
    }
    char e = max + 48;
    if(index != -1)
    {
        a.erase(index, 1);
        a = a + e;
    }
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
