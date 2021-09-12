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
	string s;
    cin >> s;
    char s0 = 'a';
    int  sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int l1 = abs(s[i] - s0);
        int l2 = 26 - abs(l1);
        sum += min(l1, l2);
        s0 = s[i];
    }
    cout << sum << endl;
	

	Alhamdulillah;
}