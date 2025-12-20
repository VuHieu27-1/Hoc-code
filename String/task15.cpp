#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n %= 26;
    char h = n + 64;
    if(n == 0)
    {
        n = 90;
        h = n;
    }
    cout << h << endl;
}