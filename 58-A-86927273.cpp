#include<bits\stdc++.h>
using namespace std;
int main()
{
    string b;
    string a="hello";
    int count=0,k=0;
    cin>>b;

    int l=b.length();
    for(int i=0;i<l;i++)
    {
        if(b[i]==a[k])
        {
            k++;
            count++;
        }
    }

    if(count==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}