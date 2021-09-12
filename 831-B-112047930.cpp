#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
int getIndex(string s, char chr)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == chr)
        {
            return i;
        }
    }
}
Bismillah
{
    long long int t, cas = 1;
    string a, b, c;
    cin >> a >> b >> c;
    int n = c.size();

    for (int i = 0; i < n; i++)
    {
        char p;
        bool f = isupper(c[i]);
        if (c[i] >= 65)
        {
            if (f == 1)
            {
                p = tolower(c[i]);
                int temp = getIndex(a, p);
                p = toupper(b[temp]);
            }
            else
            {
                p = c[i];
                int temp = getIndex(a, p);
                p = b[temp];
            }
            cout << p;
        }
        else
        {
            cout<<c[i];
        }
    }

    Alhamdulillah;
}