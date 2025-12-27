#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
void thuaso(long long a)
{
    int value = 2;
    vector<int> c;
    int index = 1;
    while(a != 1 && value <= sqrt(a))
    {
        if(a % value != 0)
        {
            value++;
        }else{
            cout << value << " ";
            a /= value;
        }
    }
    if(a > 1)
    {
        cout << a;
    }
    

}
int main()
{
    long long n;
    cin >> n;
    thuaso(n);
}
