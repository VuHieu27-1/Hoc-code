#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
string chuoi(string a)
{
    sort(a.begin(), a.end());
    return a;
}
int main()
{
    string a;
    cin >> a;
    cout << chuoi(a) << endl;
}