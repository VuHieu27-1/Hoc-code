#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void thuaso(long long a)
{
    vector<int> c;
    int value = 2; 
    int index = 1;      
    while(a != 1 && value <= sqrt(a))
    {
        if(a % value != 0)
        {
            value++;
        }else{
            c.push_back(value);
            a /= value;
        }
    }
    if(a > 1)
    {
        c.push_back(a);
    }
    for (int i = 0; i < c.size(); i++)
    {
        if(c[i] != c[i + 1])
        {
            cout << c[i] << "^" << index ;

            if(i != c.size() - 1)
            {
                cout << " * ";
            }
            index = 1;
        }else
        {
            index++;
        }
    }
}
int main()
{
    long long n;
    cin >> n;
    thuaso(n);
}
