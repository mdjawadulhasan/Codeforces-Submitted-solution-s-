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
        
        if(a[i]=='4' || a[i]=='7')
        {
            
           count++;
        }
    }

    if(count==4|| count==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    
}