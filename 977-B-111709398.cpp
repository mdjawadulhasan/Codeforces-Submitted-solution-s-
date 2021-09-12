#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
#define FOR1 for (int i = 0; i < n; i++)

Bismillah
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    char a, b;
    a = s[0];
    b = s[1];
    char r, r1;
    int count = 0;
    int max=0;
    for (int j = 0; j < n; j++)
    {
        int count = 0;
        char a, b;
        a = s[j];
        b = s[j + 1];
       // cout<<a<<" "<<b<<endl;
        for (int i = 0; i < n; i++)
        {
            if ((a == s[i] && b == s[i+1]))
            {
                count++;
               // cout<<"Condition :"<<s[i]<<" see "<<s[i+1]<<endl;
                //cout<<"Counted :"<<count<<endl;
            }

        }

        if(count>max)
        {
            max=count;
            r=a;
            r1=b;
           // cout<<"Cheke"<<r<<" "<<r1<<endl;
        }
    }



    cout<<r<<r1<<endl;
    Alhamdulillah;
}