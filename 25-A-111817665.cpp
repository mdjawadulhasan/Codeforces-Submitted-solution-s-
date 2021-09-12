#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
#define FOR1 for (int i = 0; i < n; i++)

Bismillah
{
    int t;
    cin >> t;
    int ar[t+1];
    for (int i = 1; i <= t; i++)
    {
        cin >> ar[i];
    }
    int ec = 0;
    int oc = 0;
    int e1, e2;
    for (int i = 1; i <= t; i++)
    {
        if (ar[i] % 2 == 0)
        {
            ec++;
            e1 = i;
        }
        else
        {
            oc++;
            e2 = i;
        }
    }

    if (ec > oc)
    {
        cout << e2 << endl;
    }
    else
    {
        cout << e1 << endl;
    }
    Alhamdulillah;
}