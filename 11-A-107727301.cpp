#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int sum = 0;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < (n - 1); i++)
    {
        if (ar[i] >= ar[i + 1])
        {
            int temp=0;
            temp = (ar[i] - ar[i + 1]);
            temp++;

            if ((temp - 1) == 0)
            {
                sum++;
                ar[i+1]+=d;
            }
            else if ((temp - 1) < d)
            {
                sum++;
                ar[i+1]+=d;
            }
            else if (temp % d == 0)
            {
                int count = (temp / d);
                sum += count;
                ar[i+1]+=(count*d);
            }
            else
            {
                int count2 = (temp / d);
                count2++;
                sum += count2;
                ar[i+1]+=(count2*d);
            }
        }
    }

    cout << sum << endl;
}