#include<bits/stdc++.h>
using namespace std;
int main()

{
int n;
cin>>n;

char s;
int Acnt=0,Bcnt=0;

for(int i=0;i<n;i++)
{
   cin>>s;

   if(s=='A')
   {
      Acnt++;
   }
   else
   {
      Bcnt++;
   }
   
}

if(Acnt>Bcnt)
{
   cout<<"Anton"<<endl;
}
else if(Bcnt>Acnt)
{
   cout<<"Danik"<<endl;
}
else
{
   cout<<"Friendship"<<endl;
}



}