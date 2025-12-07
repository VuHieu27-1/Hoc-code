#include<iostream>
#include<string>
#include<algorithm>
#include<climits>
using namespace std;
void in(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != ' ')
        {
            cout << a[i];
        }else
        {
            cout << endl;
        }
    }
}
int main()
{
    string a;
    getline(cin,a);
    in(a);
}
