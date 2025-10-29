#include<iostream>
#include<climits>
#include<vector>  
using namespace std;   
///////==================C1=========================////////////////////
// int main()
// {
//     int n, d, x = 0;
//     cin >> n;
//     vector<int> digits ;
//     while(n != 0)
//     {
//         d = n % 10;
//        digits.push_back(d);
//         // cout<< digits.back() << " ";
//         n /= 10;
//     }
//     for (int i = 0; i < digits.size(); i++)
//     {
//         x += digits[i];
//         x *= 10;
//     }
//     if(x > n)
//     {
//         x = x / 10;
//     }
//     cout << x << endl;
//         return 0;
// }
//////////////////////////-================C2=========================////////////////////
int main()
{
    long long n, d, res = 0;
    cin >> n;
    while(n != 0)
    {
        d = n % 10;
        res = res * 10 + d;
        n /= 10;
    }
    cout << res << endl;
    return 0;
}