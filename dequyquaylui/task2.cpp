#include<iostream>
#include<vector>
using namespace std;
int n;
int x[100];
bool t;
void loop(int index)
{
    for (int i = 1; i <= 4; i++)
    {
        x[index] = i;
        if(index < n)
        {
            loop(index + 1);
        }else
        {
            for (int j = 1; j <= n - 1; j ++)
            {
                if(x[j] <= x[j + 1])
                {
                    t = true;
                }else{
                    t = false;
                    break;
                }
            }
            if(t)
            {
                for (int z = 1; z <= n; z++)
                {
                    cout << x[z] << " ";
                }
                cout << endl;
            }
        }
    }
}
int main()
{
    cin >> n;
    loop(1);
}