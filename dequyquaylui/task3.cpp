#include<iostream>
#include<vector>
using namespace std;
int n;
int x[100];
int dem[100];
bool t;
void loop(int index)
{
    for (int i = 1; i <= n; i++)
    {
        x[index] = i;
        if(index < n)
        {
            loop(index + 1);
        }else
        {
            for (int j = 1; j <= n; j ++)
            {
                dem[x[j]]++;
            } 
            for (int j = 1; j <= n; j++)
            {
                if(dem[x[j]] < 2)
                {
                    t = true;
                }else
                {
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
            for (int j = 0; j <= n; j++)
            {
                dem[j] = 0;
            }
        }
    }
}
int main()
{
    cin >> n;
    loop(1);
}