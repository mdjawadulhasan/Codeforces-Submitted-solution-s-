#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int ar[1000];
    for (int i = 0; i < n; i++)
    {
        cin>>ar[i];
    }

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>h)
        {
            count=count+2;
        }
        else 
        {
            count++;
        }
    }

    cout<<count<<endl;
}