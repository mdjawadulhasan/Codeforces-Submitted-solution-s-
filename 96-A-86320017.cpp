#include<bits\stdc++.h>
using namespace std;
int main()
{
    string str;
        cin>>str;
        
        int l=str.length();
        int ct=0,bt=0;
        int ok=0;
        
      for(int i=0;i<l;i++)
      {
          if(str[i]=='1')
          {
              ct++;
              bt=0;
          }

          else
          {
             bt++;
             ct=0;
          }
           if(ct==7 || bt==7)
           {
            ok=1;
            break;
           }
      } 
         if(ok==1)
         {
             cout<<"YES"<<endl;
         } 
         else
         {
             cout<<"NO"<<endl;
         }
                 
}