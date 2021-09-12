#include <bits/stdc++.h>
using namespace std;

int fnd(long long int r[], long long int n, long long int v)
{
    for (int i = 0; i < n; i++)
    {
        if (r[i] == v)
        {
            r[i]=-1;
            return i;
        }
    }
}

int main()
{

    long long int n, m;
    cin >> n >> m;
    long long int ar[m];
    long long int ar2[m];
    long long int tar[m];
    long long int nn = n;
    long long int count = 0;
    long long int sum = 0;
    for (long long int i = 0; i < m; i++)
    {
        cin >> ar[i] >> ar2[i];
        tar[i] = ar2[i];
    }

    sort(tar, (tar + m));

    for (long long int i = (m - 1); i >= 0; i--)
    {
        long long int index = fnd(ar2, m, tar[i]);
        if (nn >= ar[index])
        {   
            sum = sum + (ar[index] * tar[i]);
            count = count + ar[index];
            nn = n - count;
        }
        else if (nn < ar[index])
        {
           
            sum = sum + (nn * tar[i]);
            count = count + nn;
       

        }

        if (count >= n)
        {
            break;
        }
    }

    cout << sum << endl;
}