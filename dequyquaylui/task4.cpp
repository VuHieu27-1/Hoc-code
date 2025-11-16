#include<iostream>
#include<vector>
using namespace std;
int n;
int x[100];
int dem[100];
bool t;
void loop(int index)
{
    for (int i = 0; i <= 1; i++)
    {
        x[index] = i;
        if(index < n)
        {
            loop(index + 1);
        }else
        {
            for (int j = 1; j <= n; j++)
            {
                cout << x[j] << " ";
            }
            cout << endl;
        }
}
}
int main()
{
    cin >> n;
    loop(1);
}