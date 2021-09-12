#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int ar[n];
    int count = 0, max = 0;

    queue<pair<int, int>> s;

    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
        float temp;
        temp = ((float)ar[i] / m);
        if (temp <= 1)
        {
            max = temp;
            count = i;
        }
        if (temp > 1)
        {
            ar[i] = ar[i] - m;
            s.push({ar[i], i});
        }
    }

    while (!s.empty())
    {
        int tempval = s.front().first;
        int index = s.front().second;
        float temp = float((s.front().first)) / m;
        if (temp > 1)
        {
            
            s.pop();
            s.push({(tempval - m), index});
            
        }
        else
        {
            
            count = s.front().second;
            s.pop();
        }


         

    }
    cout << count << endl;
}