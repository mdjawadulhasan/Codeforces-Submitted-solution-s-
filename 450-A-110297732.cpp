//optimized

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, p;
    double t, max=0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (ceil(t / m) >= max)
        {
            p = i;
            max = ceil(t / m);
        }
    }
    cout << p << endl;
    return 0;
}