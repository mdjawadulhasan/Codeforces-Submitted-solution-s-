#include<iostream>
  #include<string>
  #include<ctype.h>
  #include <stdio.h>
  using namespace std;

  int main()
  {
      char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
      char b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',};

      string s;
      cin>>s;
      int i,j,ca=0,cb=0;
        char c;

      int ln = s.length();

     for ( j=0; j<26; j++){
       for ( i=0; i<ln; i++)
      {
         if (a[j]==s[i] ) ca++;
      }
     }
     for ( j=0; j<26; j++){
       for ( i=0; i<ln; i++)
      {
         if (b[j]==s[i] ) cb++;
      }
     }

      if ( ca>=cb)
      {
          for ( i=0; i<ln; i++)
          {
              c=s[i];
              putchar (tolower(c));
          }
      }
      else {
          for ( i=0; i<ln; i++)
          {
              c=s[i];
              putchar (toupper(c));
          }
      }
  }