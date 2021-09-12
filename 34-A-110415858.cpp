#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ar[n];
    int min = 1001;
    int temp;
    int in1 = 0;
    int in2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 1; i < n; i++)
    {
        temp = abs(ar[i - 1] - ar[i]);
        if (temp < min)
        {
            min = temp;
            in1 = (i - 1);
            in2 = i;
        }
    }

    temp = abs(ar[0] - ar[n - 1]);
    if (temp < min)
    {
        min = temp;
        in1 = 0;
        in2 = (n - 1);
    }
    in1++;
    in2++;

    cout<<in1<<" "<<in2<<endl;
}