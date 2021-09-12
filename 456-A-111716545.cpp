#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
#define FOR1 for (int i = 0; i < n; i++)

Bismillah
{
    int n;
    cin>>n;
    int count=0;
    int count2=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(b>a)
        {
            count++;
        }
        if(a>b)
        {
            count2++;
        }
        
    }

    if(count>=1 && count2 >=1)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }
    
    Alhamdulillah;
}