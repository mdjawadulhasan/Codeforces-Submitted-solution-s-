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
    int n;
    cin>>n;
    int ar[n];
    int ar2[n];
    for(int i=1;i<=n;i++)
    {
        cin>>ar[i];
        ar2[ar[i]]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<ar2[i]<<" ";
    }
    Alhamdulillah;
}