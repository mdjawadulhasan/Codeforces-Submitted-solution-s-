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
    int a,b;
    cin>>a>>b;
    int t=max(a,b);
    int A=0;
    for(int i=1;i<=6;i++)
    {
        if(i>=t)
        {
            A++;
        }
    }

    if(A==0)
    {
        cout<<0<<"/"<<1<<endl;
    }
    else if(6%A==0)
    {
        A=6/A;
        cout<<1<<"/"<<A<<endl;
    }
    else
    {
       if(A%2==0)
       {
           cout<<A/2<<"/"<<6/2<<endl; 
       }
       else
       {
           cout<<A<<"/"<<6<<endl; 
       }
    }



    Alhamdulillah;
}