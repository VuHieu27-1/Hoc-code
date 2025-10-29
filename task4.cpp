#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    long long n, d, dem = 0, max = 0, min = 0;
    long long m;
    cin >> n;
    vector<int> digits;
    while(n != 0)
    {
        d = n % 10;
        digits.push_back(d);
        n /= 10;
    }
    sort(digits.begin(), digits.end(), greater<int>());
    for (int i = 0; i < digits.size(); i++)
    {
        max = max * 10 + digits[i];
    }
    cout << max << endl;
    sort(digits.begin(), digits.end());
    for (int i = 0; i < digits.size(); i++)
    {
        min = min * 10 + digits[i];
    }
    cout << min << endl;
    m = max - min;
    cout << m << endl;
    return 0;
}