#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            for (int z = 1; z <= 4; z++)
            {
                if(i <= j <= z)
                {
                    cout << i << " ";
                    cout << j << " ";
                    cout << z << endl;
                }
            }
        }
    }
    return 0;
}