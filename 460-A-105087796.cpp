#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int temp;
    int count = 1;

    while (true)
    {
        temp = m * count;
        count++;

        if (temp > n)
        {
            break;
        } 
        n++;
    }

    cout<<n<<endl;
}