#include<iostream> 
#include<vector>
using namespace std;
bool isPalindrome(int x) {
    int d, so_nguoc = 0;
    int m = x;
    if(x < 0)
    {
        return 0;
    }
    while(x != 0)
    {
        d = x % 10;
        so_nguoc = so_nguoc*10 + d;
        x /= 10;
    }
    
    if(so_nguoc == m)
    {
        return 1;
    }
    return 0;
}
int main()
{
    cout << isPalindrome(10);
}