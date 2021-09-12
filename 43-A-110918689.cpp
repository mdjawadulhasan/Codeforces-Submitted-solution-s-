#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   string ar[n];
   int count1=0;
   int count2=0;
   for(int i=0;i<n;i++)
   {
       cin>>ar[i];
   }

   sort(ar,ar+n);

    for(int i=0;i<n;i++)
    {
        if(ar[0]==ar[i])
        {
            count1++;
        }
        else 
        {
            count2++;
        }
    }


    if(count1>count2)
    {
        cout<<ar[0]<<endl;
    }
    else
    {
        cout<<ar[n-1]<<endl;
    }

}