#include<bits\stdc++.h>
using namespace std;
int main()
{

int ar[]={4,7,44,47,74,77,444,447,774,474,477,744,747,777};
int n;
cin>>n;
int Y=0;
for(int i=0;i<14;i++)
{
   if(n%ar[i]==0)
   {
        Y=1;
       break;
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