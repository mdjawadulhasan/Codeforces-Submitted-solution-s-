#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = s.length();
    int count=1;
    int store_count[10000];

    for(int i=0;i<l;i++)
    {
      if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
      {
          count=1;
          store_count[i]=count;
      }
      else
      {
          count++;
          store_count[i]=count;
      }
    }

    cout<<*max_element(store_count,store_count+l); 
}