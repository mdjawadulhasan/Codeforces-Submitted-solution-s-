/*++++++++++Subhanallahi wabihamdihi subhanallahil azim++++++++++*/
#include <bits/stdc++.h>
using namespace std;
#define Bismillah int main()
#define Alhamdulillah return 0
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

Bismillah
{
    optimize();
    int n;
    cin >> n;
    string s;
    string s1;
    cin >> s >> s1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp1 = abs(s[i] - s1[i]);
        int temp2 = s[i] + (10 - s1[i]);
        int temp3 = (10 - s[i]) + s1[i];
        int ans = min(temp1, temp2);
        int finalans = min(ans, temp3);
        count += finalans;
       // cout << "CASE : " << i << " " << count << endl;
    }

    cout << count << endl;

    Alhamdulillah;
}