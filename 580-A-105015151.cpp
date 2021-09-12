#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int temp, count = 1;
    int max;
    int finalcount = 0;
    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 1; i < n; i++)
    {
        max = ar[i - 1];
        if (max > ar[i])
        {
            if (count > finalcount)
            {
                finalcount = count;
                flag = 1;
            }
            count = 1;
        }
        else
        {
            count++;
            if (flag == 1)
            {
                if (count > finalcount)
                {
                    finalcount = count;
                }
            }
            
        }
    }

    if (flag == 0)
    {
        finalcount = count;
    }

    cout << finalcount << endl;
}