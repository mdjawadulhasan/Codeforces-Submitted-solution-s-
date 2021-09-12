#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, k;
    int ar[100];
    int count = 0;
    cin >> t >> k;
    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];
    }
    if ((ar[0] <= k) || (ar[t - 1] <= k))
    {
        if (ar[0] <= k)
        {
            for (int i = 0; i < t; i++)
            {

                if (ar[i] > k)
                {
                    break;
                }
                count++;
            }
        }
        if (ar[t - 1] <= k)
        {
            for (int i = (t - 1); i >= 0; i--)
            {
                if (count == (t))
                {
                    break;
                }
                if (ar[i] > k)
                {
                    break;
                }
                count++;
            }
        }
    }
    else
    {
        count = 0;
    }

    cout << count << endl;
}