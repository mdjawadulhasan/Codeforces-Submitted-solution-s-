#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int mon, tue, wed, thu, fri, sat, sun;
    cin >> mon >> tue >> wed >> thu >> fri >> sat >> sun;
    int count = 0;
    while (true)
    {

        count = count + mon;
        if (count >= n)
        {
            cout << 1 << endl;
            break;
        }

        count = count + tue;
        if (count >= n)
        {
            cout << 2 << endl;
            break;
        }

        count = count + wed;
        if (count >= n)
        {
            cout << 3 << endl;
            break;
        }

        count = count + thu;
        if (count >= n)
        {
            cout << 4 << endl;
            break;
        }

        count = count + fri;
        if (count >= n)
        {
            cout << 5 << endl;
            break;
        }

        count = count + sat;
        if (count >= n)
        {
            cout << 6 << endl;
            break;
        }

        count = count + sun;
        if (count >= n)
        {
            cout << 7 << endl;
            break;
        }
    }
}