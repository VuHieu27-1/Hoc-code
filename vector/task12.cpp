// #include<iostream>
// #include<vector>
// #include<set>
// #include <map>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<int>> c;
//     vector<int> a(n);
//     vector<int> b;
//     map<int, vector<int>> dem;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         dem[a[i]].push_back(i);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         c.push_back(dem[a[i]]);
//     }
//     for (int i = 0; i < c.size(); i++)
//     {
//         if(!dem[a[i]].empty())
//         {
//             cout << a[i] << " : ";
//             for (int j = 0; j < dem[a[i]].size(); j++)
//             {
//                 cout << dem[a[i]][j] << " ";
//             }
//             dem[a[i]] = {};
//             cout << endl;
//         }
//     }
// }
#include<iostream>
#include<vector>
#include<set>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> c;
    vector<int> a(n);
    vector<int> b;
    map<int, vector<int>> dem;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        dem[a[i]].push_back(i);
    }
    for(auto x : dem)
    {
        cout << x.first << ": " ;
        for(auto y : x.second)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}