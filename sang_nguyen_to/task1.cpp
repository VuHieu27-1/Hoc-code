#include<iostream>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
vector<int> b;
void sangnt (int a)
{
    b.resize(a + 1, 1);
    b[0] = b[1] = 0;
    for (int i = 2; i < sqrt(a); i++)
    {
        if(b[i] == 1)
        {
            for (int j = i * i; j <= a; j += i)
            {
                b[j] = 0;
            }
        }
    }

}
int main()
{
    int n;
    cin >> n;
    sangnt(n);
    for (int i = 0; i < n; i++)
    {
        cout << i << " " << b[i] << endl;
    }
}