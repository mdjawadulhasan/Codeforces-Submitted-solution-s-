#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if (m >= n)
    {
        if (n % 2 == 0 && m > 1)
        {
            cout << "Malvika" << endl;
        }
        else
        {
            cout << "Akshat" << endl;
        }
    }
    else
    {
        if (m % 2 == 0 && n > 1)
        {

           
             cout << "Malvika" << endl;
        }
        else
        {
              cout << "Akshat" << endl;
        }
    }
}