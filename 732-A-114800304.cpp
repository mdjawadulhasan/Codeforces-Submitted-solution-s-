/*++++++++++Subhanallahi wabihamdihi subhanallahil azim++++++++++*/
#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

Bismillah
{
    optimize();
    long long int k, r;
    cin >> k >> r;
    int n = 1;
    while (true)
    {
        int temp = k * n;
        if (temp % 10 == 0)
        {
            break;
        }
        else if ((temp - r) % 10 == 0)
        {
            break;
        }
        else
        {
            n++;
        }
    }

    cout << n << endl;

    Alhamdulillah;
}