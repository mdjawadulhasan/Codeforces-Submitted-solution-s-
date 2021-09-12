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
    int n, b, d;
    cin >> n >> b >> d;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int count = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i]<=b)
        {
            count += ar[i];
            if (count > d)
            {
                c++;
                count=0;
            }
        }
    }

    cout<<c<<endl;

    Alhamdulillah;
}