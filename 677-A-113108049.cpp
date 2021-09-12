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
    long long int n, h;
    cin >> n >> h;
    long long int ar[n];
    long long int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] > h)
        {
            count += 2;
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;

    Alhamdulillah;
}