#include<bits/stdc++.h>
using namespace std;
int main()

{
    string a;
    cin>>a;
    int i;
    int Y=0,count=0;


    int l=a.size();

    for(i=0;i<l;i++)
    {
        
        if(a[i]=='H' || a[i]=='Q' || a[i]=='9' )
        {
          Y=1;
        }
    }

    if(Y==1)
    {
    cout<<"YES"<<endl;
    }
    else
    {
    cout<<"NO"<<endl;
    }


    
}