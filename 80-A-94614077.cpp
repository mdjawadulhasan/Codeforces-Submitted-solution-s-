#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)return false;
    
    for(int i=2;i<n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    int a,b;
    cin>>a>>b;
 while (1)
    {
       a++;
       if(isPrime(a)==1)
       {
           break;
       }
    }
    
    if(a==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}